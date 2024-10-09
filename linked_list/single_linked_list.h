//
// Created by xuanviet_cse on 10/8/24.
//

#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include "node.h"

class single_linked_list {
private:
  int len;
  node *head;
  node *tail;
public:
  single_linked_list();
  ~single_linked_list();
  int size() const;
  bool is_empty() const;
  void add(int);
  void add_first(int);
  void add_last(int);
  void add_at(int, int);
  int peek_first();
  int peek_last();
  void remove_first();
  void remove_last();
  void remove_at(int);
  void remove_value(int);
  int index_of(int);
  bool is_contain(int);
  void display();
};

#endif //SINGLE_LINKED_LIST_H
