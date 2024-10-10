//
// Created by xuanviet_cse on 10/10/24.
//

#include "linked_list_queue.h"

linked_list_queue::linked_list_queue() {
  this->list = new single_linked_list();
}

linked_list_queue::~linked_list_queue() {
  while (!is_empty()) {
    dequeue();
  }
  delete this->list;
}

int linked_list_queue::size() const {
  return this->list->size();
}

bool linked_list_queue::is_empty() const {
  return (this->list->size() == 0);
}

void linked_list_queue::enqueue(const int value) const {
  this->list->add_last(value);
}

void linked_list_queue::dequeue() const {
  this->list->remove_first();
}

int linked_list_queue::peek() const {
  return this->list->peek_first();
}

void linked_list_queue::display() const {
  this->list->display();
}

