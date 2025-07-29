// TC --> O(N) and SC --> O(N)
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode *root) {
  if (!root)
    return 0;
  return 1 + max(maxDepth(root->left), maxDepth(root->right));
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
  cout << maxDepth(n1) << endl;
  return 0;
}
