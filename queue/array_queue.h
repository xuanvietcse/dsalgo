//
// Created by xuanviet_cse on 10/10/24.
// Seriously, implement queue with linked list is
// easier than array.
// In array queue implementation, you can only use (capacity - 1) elements, because one slot is used to
// distinguish empty versus full case.
//

#ifndef ARRAY_QUEUE_H
#define ARRAY_QUEUE_H

#define DEFAULT_QUEUE_SIZE (10)

class array_queue {
private:
  int capacity;
  int len;
  int head;
  int *data;
public:
  explicit array_queue();
  explicit array_queue(int capacity);
  ~array_queue();
  int size() const;
  bool is_empty() const;
  void enqueue(int value);
  void dequeue();
  int peek() const;
  void display() const;
};



#endif //ARRAY_QUEUE_H
