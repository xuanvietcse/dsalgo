//
// Created by xuanviet_cse on 10/10/24.
// Linked list stack implementation based on linked list
// and have no limitation on capacity
//

#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H

#include "single_linked_list.h"

class linked_list_stack {
private:
  single_linked_list* list;
public:
  linked_list_stack();
  ~linked_list_stack();
  int size() const;
  bool is_empty() const;
  void push(int data) const;
  void pop() const;
  int peek() const;
  void display() const;
};

#endif //LINKED_LIST_STACK_H
