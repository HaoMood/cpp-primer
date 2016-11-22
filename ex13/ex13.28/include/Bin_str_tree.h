/*
 * Bin_str_tree.h
 * C++ Primer Chap. 13 Ex. 13.28
 * Hao Zhang 
 * 2016.11.22  Frist release
 */

#ifndef BIN_STR_TREE_H_
#define BIN_STR_TREE_H_

#include "Tree_node.h"

class Bin_str_tree {
private:
  Tree_node *_root;
public:
  Bin_str_tree(): _root(new Tree_node()) {}
  Bin_str_tree(const Bin_str_tree &tree): _root(new Tree_node(*tree._root)) {}
  Bin_str_tree &operator=(const Bin_str_tree &tree);
  ~Bin_str_tree() { delete _root; }
};

Bin_str_tree &Bin_str_tree::operator=(const Bin_str_tree &tree) {
  auto new_root = new Tree_node(*tree._root);
  delete _root;
  _root = new_root;
  return *this;
}

#endif  // TREE_NODE_H_
