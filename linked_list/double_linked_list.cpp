//
// Created by xuanviet_cse on 10/9/24.
//

#include "double_linked_list.h"
#include <cstdlib>
#include <iostream>

double_linked_list::double_linked_list() {
  this->len = 0;
  this->head = nullptr;
  this->tail = nullptr;
}

double_linked_list::~double_linked_list() {
  if (this->len != 0) {
    while (this->head != nullptr) {
      node *temp = this->head;
      this->head = this->head->get_next();
      free(temp);
    }
    free(this->head);
  }
}

int double_linked_list::size() const {
  return this->len;
}

bool double_linked_list::is_empty() const {
  return (this->len == 0);
}

void double_linked_list::add(const int data) {
  add_last(data);
}

void double_linked_list::add_first(const int data) {
  node *new_node = new node(data);
  // Check if the list is empty or not
  if (is_empty()) {
    this->head = this->tail = new_node;
  } else {
    new_node->set_next(this->head);
    this->head->set_prev(new_node);
    this->head = new_node;
  }
  this->len++;
}

void double_linked_list::add_last(const int data) {
  node *new_node = new node(data);
  // Check if the list is empty or not
  if (is_empty()) {
    this->tail = this->head = new_node;
  } else {
    this->tail->set_next(new_node);
    new_node->set_prev(this->tail);
    this->tail = new_node;
  }
  this->len++;
}

void double_linked_list::add_at(const int index, const int data) {
  // Check parameters
  if (index > size() || index < 0) {
    std::cout << "index out of bounds" << std::endl;
  } else if (index == 0) {
    add_first(data);
  } else if (index == size()) {
    add_last(data);
  } else {
    node *new_node = new node(data);
    node *trav_1 = this->head;
    for (int i = 0; i < index - 1; i++) {
      trav_1 = trav_1->get_next();
    }
    node *trav_2 = trav_1->get_next();
    new_node->set_next(trav_2);
    trav_2->set_prev(new_node);
    new_node->set_prev(trav_1);
    trav_1->set_next(new_node);
    this->len++;
  }
}

int double_linked_list::peek_first() const {
  return this->head->get_data();
}

int double_linked_list::peek_last() const {
  return this->tail->get_data();
}

void double_linked_list::remove_first() {
  // Check if the list is empty
  if (is_empty()) {
    std::cout << "empty list" << std::endl;
  } else {
    node *temp = this->head;
    this->head = this->head->get_next();
    this->head->set_prev(nullptr);
    temp->set_next(nullptr);
    free(temp);
    this->len--;
  }
}

void double_linked_list::remove_last() {
  // Check if the list is empty
  if (is_empty()) {
    std::cout << "empty list" << std::endl;
  } else {
    node *temp = this->tail;
    this->tail = this->tail->get_prev();
    this->tail->set_next(nullptr);
    temp->set_prev(nullptr);
    free(temp);
    this->len--;
  }
}

void double_linked_list::remove_at(const int index) {
  if (index > size() || index < 0) {
    std::cout << "index out of bounds" << std::endl;
  } else if (index == 0) {
    remove_first();
  } else if (index == size() - 1) {
    remove_last();
  } else {
    node *trav_1 = this->head;
    for (int i = 0; i < index - 1; i++) {
      trav_1 = trav_1->get_next();
    }
    node *temp = trav_1->get_next();
    node *trav_2 = temp->get_next();
    trav_1->set_next(trav_2);
    trav_2->set_prev(trav_1);
    temp->set_next(nullptr);
    temp->set_prev(nullptr);
    free(temp);
    this->len--;
  }
}

void double_linked_list::remove_value(int value) {
  if (!is_contain(value)) {
    std::cout << "value not in list" << std::endl;
  } else {
    remove_at(index_of(value));
  }
}

int double_linked_list::index_of(int value) const {
  node *temp = this->head;
  int count = 0;
  while (temp != nullptr) {
    if (temp->get_data() == value) {
      return count;
    }
    temp = temp->get_next();
    count++;
  }
  return -1;
}

bool double_linked_list::is_contain(int value) const {
  return (index_of(value) != -1);
}

void double_linked_list::display() const {
  node *trav = this->head;
  while (trav != nullptr) {
    std::cout << trav->get_data() << " -> ";
    trav = trav->get_next();
  }
}
