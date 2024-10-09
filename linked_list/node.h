//
// Created by xuanviet_cse on 10/8/24.
//

#ifndef NODE_H
#define NODE_H

#ifdef SLL

class node {
private:
  int data;
  node *next;
public:
  explicit node();
  explicit node(int);
  ~node();
  int get_data() const;
  void set_data(int);
  node *get_next() const;
  void set_next(node *);
};

#else

class node {
private:
  int data;
  node *next;
  node *prev;
public:
  explicit node();
  explicit node(int);
  ~node();
  int get_data() const;
  void set_data(int);
  void set_next(node *);
  node *get_next() const;
  void set_prev(node *);
  node *get_prev() const;
};

#endif

#endif //NODE_H
