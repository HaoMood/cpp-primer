/*
 * Tree_node.h
 * C++ Primer Chap. 13 Ex. 13.28
 * Hao Zhang 
 * 2016.11.22  Frist release
 */

#ifndef TREE_NODE_H_
#define TREE_NODE_H_

#include <string>
using std::string;

class Tree_node {
private:
  string _value;
  Tree_node *_left;
  Tree_node *_right;
  int *_ref_count;
public:
  Tree_node();
  Tree_node(const Tree_node &node);
  Tree_node &operator=(const Tree_node &node);
  ~Tree_node();
};

Tree_node::Tree_node(): 
    _value(), _left(nullptr), _right(nullptr), _ref_count(new int(1)) {}

Tree_node::Tree_node(const Tree_node &node): 
    _value(node._value), _left(node._left), _right(node._right), 
    _ref_count(node._ref_count) {
  ++*_ref_count;
}

Tree_node &Tree_node::operator=(const Tree_node &node) {
  ++*node._ref_count;
  if (--*_ref_count) {
    delete _left;
    delete _right;
    delete _ref_count;
  }

  _value = node._value;
  _left = node._left;
  _right = node._right; 
  _ref_count = node._ref_count;
  return *this;
}

Tree_node::~Tree_node() {
  if (--*_ref_count) {
    delete _left;
    delete _right;
    delete _ref_count;
  }
}
#endif  // TREE_NODE_H_
