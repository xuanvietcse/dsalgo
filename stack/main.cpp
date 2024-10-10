#include <iostream>

#include "array_stack.h"
#include "linked_list_stack.h"
int main() {
  // linked_list_stack stack;
  array_stack stack;
  // Add
  stack.push(5);
  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.push(40);
  stack.display();
  std::cout << std::endl;
  // Remove
  stack.pop();
  stack.pop();
  stack.display();
  std::cout << std::endl;
  // Peek
  std::cout << "Top value: " << stack.peek() << std::endl;
  return 0;
}
