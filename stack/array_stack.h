//
// Created by xuanviet_cse on 10/10/24.
// Stack implementation based on array
// This implementation has limitation on capacity
//

#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#define DEFAULT_STACK_CAPACITY 10

class array_stack {
private:
  int capacity;
  int head;
  int *data;
public:
  explicit array_stack();
  explicit array_stack(int capacity);
  ~array_stack();
  int size() const;
  bool is_empty() const;
  void push(int value);
  void pop();
  int peek() const;
  void display() const;
};



#endif //ARRAY_STACK_H
