//
// Created by xuanviet_cse on 10/10/24.
//

#include "array_queue.h"

#include <iostream>
#include <ostream>

array_queue::array_queue() {
  this->capacity = DEFAULT_QUEUE_SIZE;
  this->len = 0;
  this->head = 0;
  this->data = new int[this->capacity];
}

array_queue::array_queue(const int capacity) {
  this->capacity = capacity;
  this->len = 0;
  this->head = 0;
  this->data = new int[this->capacity];
}

array_queue::~array_queue() {
  while (!is_empty()) {
    dequeue();
  }
  this->capacity = 0;
  this->len = 0;
  this->head = 0;
  delete[] this->data;
}

int array_queue::size() const {
  if (this->len > this->head) {
    return (this->len - this->head + 1);
  } else if (this->len < this->head) {
    return (this->capacity - (this->head - this->len));
  } else {
    return 0;
  }
}

bool array_queue::is_empty() const {
  return (size() == 0);
}

void array_queue::enqueue(const int value) {
  if ((this->len + 1) % this->capacity == this->head) {
    std::cout << "Queue is full" << std::endl;
    return;
  }
  this->data[this->len] = value;
  this->len = (this->len + 1) % this->capacity;
}

void array_queue::dequeue() {
  if (is_empty()) {
    std::cout << "Queue is empty" << std::endl;
    return;
  }
  this->head = (this->head + 1) % this->capacity;
}

int array_queue::peek() const {
  if (is_empty()) {
    std::cout << "Queue is empty" << std::endl;
    return -1;
  }
  return this->data[this->head];
}

void array_queue::display() const {
  for (int i = this->head; i != this->len; i = (i + 1) % this->capacity) {
    std::cout << this->data[i] << " -> ";
  }
}

