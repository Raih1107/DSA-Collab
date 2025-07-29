// TC --> O(N) and SC --> O(H) H is height of the tree
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

int minDepth(TreeNode *root) {
  if (root == nullptr)
    return 0;
  int leftDepth = minDepth(root->left);
  int rightDepth = minDepth(root->right);

  if (root->left == nullptr && root->right == nullptr)
    return 1;
  if (root->left == nullptr)
    return 1 + rightDepth;
  if (root->right == nullptr)
    return 1 + leftDepth;
  return min(leftDepth, rightDepth) + 1;
}

int main() {

  TreeNode *n1 = new TreeNode(3);
  TreeNode *n2 = new TreeNode(9);
  TreeNode *n3 = new TreeNode(20);
  TreeNode *n4 = new TreeNode(15);
  TreeNode *n5 = new TreeNode(7);

  n1->left = n2;
  n1->right = n3;
  n3->left = n4;
  n3->right = n5;

  TreeNode *root = n1;
  cout << minDepth(root) << endl;
  return 0;
}
