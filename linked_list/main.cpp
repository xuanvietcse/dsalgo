#include <iostream>
#include "single_linked_list.h"

int main()
{
    single_linked_list sll;
    // Add
    sll.add(5);
    sll.add(7);
    sll.add(9);
    sll.add(11);
    // Print list elements
    sll.display();
    std::cout << std::endl;
    // Add first
    sll.add_first(1);
    // Add at index 2
    sll.add_at(2, 3);
    // Print list elements
    sll.display();
    std::cout << std::endl;
    // Peek
    std::cout <<"Peek first: " << sll.peek_first() << std::endl;
    std::cout <<"Peek last: " << sll.peek_last() << std::endl;
    // Print list elements
    sll.display();
    std::cout << std::endl;
    // Remove first
    sll.remove_first();
    // Remove last
    sll.remove_last();
    // Print list elements
    sll.display();
    std::cout << std::endl;
    // Remove by value
    sll.remove_value(-1); // Illegal value
    sll.remove_value(3); // Legal value
    // Print list elements
    sll.display();
    std::cout << std::endl;
    // Remove by index
    sll.remove_at(7); // Illegal index
    sll.remove_at(2); // Legal index
    // Print list elements
    sll.display();
    return 0;
}
