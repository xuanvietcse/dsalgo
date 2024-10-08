//
// Created by xuanviet_cse on 10/8/24.
//

#define DEFAULT_SIZE (2U)

#include "dynamic_array.h"
#include <iostream>
#include <ostream>
#include <bits/locale_facets_nonio.h>

/**
 * Constructor to initialize the dynamic array with default values
 */
dynamic_array::dynamic_array() {
    this->data = new int[DEFAULT_SIZE];
    this->len = 0;
    this->capacity = DEFAULT_SIZE;
}

/**
 * Constructor to initialize the dynamic array with specific value
 * @param capacity Capacity users want to set
 */
dynamic_array::dynamic_array(const int capacity) {
    // Check parameters
    if (capacity <= 0) {
        std::cout << "Illegal capacity." << std::endl;
    } else {
        this->data = new int[capacity];
        this->len = 0;
        this->capacity = capacity;
    }
}

/**
 * Destructor of dynamic array
 */
dynamic_array::~dynamic_array() {
    delete[] this->data;
}

/**
 * Return the number of elements in this dynamic array
 * @return Number of elements in this dynamic array
 */
int dynamic_array::size() const {
    return this->len;
}

/**
 * Check if this dynamic array is empty or not
 * @return Array is empty or not
 */
bool dynamic_array::is_empty() const {
    return this->len == 0;
}

/**
 * Return value of specific element with index
 * @param index Index of element to be accessed
 * @return Value of indexed element
 */
int dynamic_array::get(const int index) const {
    // Check parameters
    if (index < 0 || index >= this->len) {
        std::cout << "Illegal index: Out of bound." << std::endl;
        return -1;
    }
    return this->data[index];
}

/**
 * Set value of index element
 * @param index Index to set value
 * @param value Value to set
 */
void dynamic_array::set(const int index, const int value) const {
    // Check parameters
    if (index < 0 || index >= this->len) {
        std::cout << "Illegal index: Out of bound." << std::endl;
    }
    this->data[index] = value;
}

/**
 * Add new value to dynamic array
 * @param value Value to add to the dynamic array
 */
void dynamic_array::add(const int value) {
    if (this->len == this->capacity) {
        int newCapacity = this->capacity * 2; // Update capacity
        int* newData = new int[newCapacity]; // Allocate new array
        // Copy old data to new array
        for (int i = 0; i < this->len; i++) {
            newData[i] = this->data[i];
        }
        delete[] this->data; // Delete old array
        this->data = newData; // Update new array
        this->capacity = newCapacity; // Update new capacity
    }
    this->data[this->len++] = value;
}

/**
 * Remove element at specific index
 * @param index Index to be removed
 */
void dynamic_array::remove_at(const int index) {
    // Check parameters
    if (index < 0 | index >= this->len) {
        std::cout << "Illegal index: Out of bound." << std::endl;
        return;
    }
    for (int i = index + 1; i < this->len; i++) {
        this->data[i - 1] = this->data[i];
    }
    this->len--;
    this->capacity--;
}

/**
 * Check if value is in dynamic array or not
 * @param value Value to check
 * @return Whether the value is existed or not
 */
bool dynamic_array::is_contain(const int value) const {
    for (int i = 0; i < this->len; i++) {
        if (this->data[i] == value) {
            return true;
        }
    }
    return false;
}

/**
 * Check and return the first index occurrence of the value
 * @param value Value to check
 * @return The first index of that value
 */
int dynamic_array::index_of(const int value) const {
    // Check if value is in array or not
    if (!is_contain(value)) {
        return -1;
    }
    for (int i = 0; i < this->len; i++) {
        if (this->data[i] == value) {
            return i;
        }
    }
    return -1;
}

void dynamic_array::remove(const int value) {
    // Check if value is in array or not
    if (!is_contain(value)) {
        std::cout << "Value not found." << std::endl;
        return;
    }
    remove_at(index_of(value));
}
