//
// Created by xuanviet_cse on 10/9/24.
//

#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include "node.h"

class double_linked_list {
private:
  int len;
  node *head;
  node *tail;
public:
  double_linked_list();
  ~double_linked_list();
  int size() const;
  bool is_empty() const;
  void add(int);
  void add_first(int);
  void add_last(int);
  void add_at(int, int);
  int peek_first() const;
  int peek_last() const;
  void remove_first();
  void remove_last();
  void remove_at(int);
  void remove_value(int);
  int index_of(int) const;
  bool is_contain(int) const;
  void display() const;
};

#endif //DOUBLE_LINKED_LIST_H
