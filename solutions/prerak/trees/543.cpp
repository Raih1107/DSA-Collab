// TC --> O(N) and SC --> O(H)
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
  TreeNode(int val, TreeNode *left, TreeNode *right)
      : val(val), left(left), right(right) {}
};

// global result variable
int res = 0;
int diameterOfBinaryTree(TreeNode *root) {

  if (root == nullptr)
    return 0;
  int leftDepth = diameterOfBinaryTree(root->left);
  int rightDepth = diameterOfBinaryTree(root->right);

  res = max(res, leftDepth + rightDepth);

  return 1 + max(leftDepth, rightDepth);
}

int main() {
  TreeNode *n1 = new TreeNode(1);
  TreeNode *n2 = new TreeNode(2);
  TreeNode *n3 = new TreeNode(3);
  TreeNode *n4 = new TreeNode(4);
  TreeNode *n5 = new TreeNode(5);

  n1->left = n2;
  n1->right = n3;
  n2->left = n4;
  n2->right = n5;

  TreeNode *root = n1;
  cout << diameterOfBinaryTree(root) << endl;
  return 0;
}
