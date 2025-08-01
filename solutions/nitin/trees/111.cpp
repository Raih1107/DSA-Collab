// [Leetcode 111.](https://leetcode.com/problems/minimum-depth-of-binary-tree/)
// Given a binary tree, find its minimum depth.

// The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

// Note: A leaf is a node with no children.

// Example 1:

// Input: root = [3,9,20,null,null,15,7]
// Output: 2

// Example 2:

// Input: root = [2,null,3,null,4,null,5,null,6]
// Output: 5

// Constraints:

//     The number of nodes in the tree is in the range [0, 105].
//     -1000 <= Node.val <= 1000

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{

    int findMin(TreeNode *root)
    {
        queue<TreeNode *> store;
        store.push(root);
        int level = 1;
        while (!store.empty())
        {
            int size = store.size();
            while (size--)
            {
                TreeNode *f = store.front();
                store.pop();
                if (!f->left && !f->right)
                {
                    return level;
                }
                if (f->left)
                {
                    store.push(f->left);
                }
                if (f->right)
                {
                    store.push(f->right);
                }
            }
            level++;
        }
        return level;
    }

public:
    int minDepth(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }
        // use bfs as it will go level by level
        return findMin(root);
    }
};