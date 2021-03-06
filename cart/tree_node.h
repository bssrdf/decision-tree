#ifndef CART_TREE_NODE_H
#define CART_TREE_NODE_H
#include <string>
#include "classifier.h"
#include "matrix.h"

class TreeNode : public Classifier{
 private:
  TreeNode *left;
  TreeNode *right;
  int column;
  double value;
  int classification;
 public:
  TreeNode();
  ~TreeNode();
  int count();
  void train(Matrix &m, std::vector<int> columns);
  virtual int classify(std::vector<double> &row);
};
#endif
