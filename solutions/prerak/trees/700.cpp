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

TreeNode *searchBST(TreeNode *root, int val) {
  if (!root)
    return nullptr;
  if (root->val == val)
    return root;
  else if (root->val > val)
    return searchBST(root->left, val);
  else
    return searchBST(root->right, val);
}

int main() {
  TreeNode *n1 = new TreeNode(4);
  TreeNode *n2 = new TreeNode(2);
  TreeNode *n3 = new TreeNode(7);
  TreeNode *n4 = new TreeNode(1);
  TreeNode *n5 = new TreeNode(3);
  n1 -> left = n2;
  n1 -> right = n3;
  n2 -> left = n4;
  n2 -> right = n5;
  TreeNode* ans = searchBST(n1, 2);
  cout << ans -> val << endl;
  return 0;
}
