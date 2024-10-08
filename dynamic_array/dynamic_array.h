//
// Created by xuanviet_cse on 10/8/24.
//

#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

class DynamicArray {
private:
    int* data; // Pointer to array
    int len; // Length users think array is
    int capacity; // Actual array size
public:
    DynamicArray();
    DynamicArray(int);
    ~DynamicArray();
    int size() const;
    bool isEmpty() const;
    int get(int) const;
    void set(int, int) const;
    void add(int);
    void removeAt(int);
    void remove(int);
    int indexOf(int) const;
    bool contains(int) const;
};

#endif //DYNAMIC_ARRAY_H
