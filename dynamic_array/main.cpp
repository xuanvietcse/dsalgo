#include <iostream>
#include "dynamic_array.h"
int main() {
    DynamicArray d_array;
    // Add
    d_array.add(5);
    d_array.add(10);
    d_array.add(20);
    d_array.add(30);
    // Print the array
    for (int i = 0; i < d_array.size(); i++) {
        std::cout << "Value of d_array[" << i << "] = " << d_array.get(i) << std::endl;
    }
    // Remove
    d_array.remove(10);
    // Print the array
    for (int i = 0; i < d_array.size(); i++) {
        std::cout << "Value of d_array[" << i << "] = " << d_array.get(i) << std::endl;
    }
    return 0;
}
