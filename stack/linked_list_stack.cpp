//
// Created by xuanviet_cse on 10/10/24.
//

#include "linked_list_stack.h"

linked_list_stack::linked_list_stack() {
  this->list = new single_linked_list();
}

linked_list_stack::~linked_list_stack() {
  while (!is_empty()) {
    this->pop();
  }
  delete this->list;
}

int linked_list_stack::size() const {
  return this->list->size();
}

bool linked_list_stack::is_empty() const {
  return (this->list->is_empty());
}

void linked_list_stack::push(const int data) const {
  this->list->add_first(data);
}

void linked_list_stack::pop() const {
  this->list->remove_first();
}

int linked_list_stack::peek() const {
  return this->list->peek_first();
}

void linked_list_stack::display() const {
  this->list->display();
}
