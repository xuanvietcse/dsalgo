//
// Created by xuanviet_cse on 10/10/24.
// This queue implementation based on single linked list
//

#ifndef LINKED_LIST_QUEUE_H
#define LINKED_LIST_QUEUE_H

#include "single_linked_list.h"

class linked_list_queue {
private:
  single_linked_list *list;
public:
  linked_list_queue();
  ~linked_list_queue();
  int size() const;
  bool is_empty() const;
  void enqueue(int value) const;
  void dequeue() const;
  int peek() const;
  void display() const;
};



#endif //LINKED_LIST_QUEUE_H
