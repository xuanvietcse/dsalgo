//
// Created by xuanviet_cse on 10/8/24.
//

#include "single_linked_list.h"
#include <cstdlib>
#include <iostream>
#include <ostream>

single_linked_list::single_linked_list() {
  this->len = 0;
  this->head = nullptr;
  this->tail = nullptr;
}

single_linked_list::~single_linked_list() {
  if (this->len != 0) {
    while (this->head != nullptr) {
      node *temp = this->head;
      this->head = this->head->get_next();
      free(temp);
    }
  }
  free(this->head);
}

int single_linked_list::size() const {
  return this->len;
}

bool single_linked_list::is_empty() const {
  return this->len == 0;
}

void single_linked_list::add(const int data) {
  add_last(data);
}

void single_linked_list::add_last(const int data) {
  // If the linked list is empty, add to the first of the list
  node *new_node = new node(data);
  if (is_empty()) {
    this->head = this->tail = new_node;
  } else {
    this->tail->set_next(new_node);
    this->tail = new_node;
  }
  this->len++;
}

void single_linked_list::add_first(const int data) {
  // If the linked list is empty, add to the first of the list
  node *new_node = new node(data);
  if (is_empty()) {
    this->head = this->tail = new_node;
  } else {
    new_node->set_next(this->head);
    this->head = new_node;
  }
  this->len++;
}

void single_linked_list::add_at(const int index, const int data) {
  // Check parameters
  if (index > size() || index < 0) {
    std::cout << "index out of bounds" << std::endl;
  } else if (index == size()) {
    add_last(data);
  } else if (index == 0) {
    add_first(data);
  } else {
    node *new_node = new node(data);
    node *trav = this->head;
    for (int i = 0; i < index - 1; i++) {
      trav = trav->get_next();
    }
    new_node->set_next(trav->get_next());
    trav->set_next(new_node);
    this->len++;
  }
}

int single_linked_list::peek_first() const {
  // Check whether the list is empty or not
  if (is_empty()) {
    std::cout << "empty list" << std::endl;
    return -1;
  }
  return this->head->get_data();
}

int single_linked_list::peek_last() const {
  // Check whether the list is empty or not
  if (is_empty()) {
    std::cout << "empty list" << std::endl;
    return -1;
  }
  return this->tail->get_data();
}

int single_linked_list::index_of(const int value) const {
  node *trav = this->head;
  int count = 0;
  while (trav != this->tail) {
    if (trav->get_data() == value) {
      return count;
    }
    trav = trav->get_next();
    count++;
  }
  // Not found
  return -1;
}

bool single_linked_list::is_contain(const int value) const {
  return (index_of(value) != -1);
}

void single_linked_list::remove_value(const int value) {
  if (is_contain(value)) {
    remove_at(this->index_of(value));
  } else {
    std::cout << "value not found" << std::endl;
  }
}

void single_linked_list::remove_at(const int index) {
  // Check if the list is empty or not
  if (is_empty()) {
    std::cout << "empty list" << std::endl;
    return;
  }
  // Check parameters
  if (index < 0 || index >= size()) {
    std::cout << "index out of bounds" << std::endl;
    return;
  }
  if (index == 0) {
    remove_first();
  } else if (index == size() - 1) {
    remove_last();
  } else {
    node *trav = this->head;
    for (int i = 0; i < index - 1; i++) {
      trav = trav->get_next();
    }
    node *temp = trav->get_next();
    trav->set_next(temp->get_next());
    free(temp);
    this->len--;
  }
}

void single_linked_list::remove_first() {
  // Check if the list is empty or not
  if (is_empty()) {
    std::cout << "empty list" << std::endl;
    return;
  }
  node *trav = this->head;
  this->head = trav->get_next();
  free(trav);
  this->len--;
}

void single_linked_list::remove_last() {
  // Check if the list is empty or not
  if (is_empty()) {
    std::cout << "empty list" << std::endl;
    return;
  }
  node *trav = this->head;
  while (trav->get_next() != this->tail) {
    trav = trav->get_next();
  }
  this->tail = trav;
  this->tail->set_next(nullptr);
  trav = trav->get_next();
  free(trav);
  this->len--;
}

void single_linked_list::display() const {
  node *trav = this->head;
  while (trav != nullptr) {
    std::cout << trav->get_data() << " -> ";
    trav = trav->get_next();
  }
}

