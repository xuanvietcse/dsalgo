//
// Created by xuanviet_cse on 10/8/24.
//

#ifndef NODE_H
#define NODE_H



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

#endif //NODE_H
