#include "linked_list_queue.h"
#include <iostream>

#include "array_queue.h"

int main() {
  // linked_list_queue queue;
  array_queue queue;
  // Enqueue
  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  queue.enqueue(4);
  queue.enqueue(5);
  queue.display();
  std::cout << std::endl;
  // Dequeue
  queue.dequeue();
  queue.dequeue();
  queue.dequeue();
  queue.display();
  std::cout << std::endl;
  // Peek
  std::cout << "First value: " << queue.peek() << std::endl;
  return 0;
}
