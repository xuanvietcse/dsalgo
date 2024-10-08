//
// Created by xuanviet_cse on 10/8/24.
//

#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

class dynamic_array {
private:
    int* data; // Pointer to array
    int len; // Length users think array is
    int capacity; // Actual array size
public:
    explicit dynamic_array();
    explicit dynamic_array(int);
    ~dynamic_array();
    int size() const;
    bool is_empty() const;
    int get(int) const;
    void set(int, int) const;
    void add(int);
    void remove_at(int);
    void remove(int);
    int index_of(int) const;
    bool is_contain(int) const;
};

#endif //DYNAMIC_ARRAY_H
