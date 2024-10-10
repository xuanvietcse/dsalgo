//
// Created by xuanviet_cse on 10/8/24.
//

#include "node.h"

#include <cstdlib>

#ifdef SLL

node::node() {
  this->data = 0;
  this->next = nullptr;
}

node::node(const int data) {
  this->data = data;
  this->next = nullptr;
}

node::~node() {
  if (this->data != 0) {
    this->data = 0;
  }
  this->next = nullptr;
  free(this->next);
}

int node::get_data() const {
  return this->data;
}

void node::set_data(const int data) {
  this->data = data;
}

node *node::get_next() const {
  return this->next;
}

void node::set_next(node *node) {
  this->next = node;
}

#else

node::node() {
  this->data = 0;
  this->next = nullptr;
  this->prev = nullptr;
}

node::node(const int data) {
  this->data = data;
  this->next = nullptr;
  this->prev = nullptr;
}

node::~node() {
  if (this->data != 0) {
    this->data = 0;
  }
  this->next = nullptr;
  this->prev = nullptr;
  free(this->next);
  free(this->prev);
}

int node::get_data() const {
  return this->data;
}

void node::set_data(const int data) {
  this->data = data;
}

node *node::get_next() const {
  return this->next;
}

void node::set_next(node *node) {
  this->next = node;
}

node *node::get_prev() const {
  return this->prev;
}

void node::set_prev(node *node) {
  this->prev = node;
}

#endif
