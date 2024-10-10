//
// Created by xuanviet_cse on 10/10/24.
//

#include "array_stack.h"

#include <iostream>
#include <ostream>

array_stack::array_stack() {
  this->capacity = DEFAULT_STACK_CAPACITY;
  this->head = -1;
  this->data = new int[this->capacity];
}

array_stack::array_stack(int capacity) {
  this->capacity = capacity;
  this->head = -1;
  this->data = new int[this->capacity];
}

array_stack::~array_stack() {
  while (!is_empty()) {
    pop();
  }
  this->capacity = 0;
  this->head = -1;
  delete[] this->data;
}

int array_stack::size() const {
  return (this->head + 1);
}

bool array_stack::is_empty() const {
  return (this->head == -1);
}

void array_stack::push(int value) {
  if (size() == this->capacity) {
    std::cout << "Stack overflow" << std::endl;
    return;
  }
  this->data[++this->head] = value;
}

void array_stack::pop() {
  if (is_empty()) {
    std::cout << "Stack underflow" << std::endl;
    return;
  }
  this->head--;
}

int array_stack::peek() const {
  return this->data[this->head];
}

void array_stack::display() const {
  for (int i = 0; i < (this->head + 1); i++) {
    std::cout << this->data[i] << " ";
  }
}

