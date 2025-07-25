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
class Solution {
public:
    int traverse(TreeNode* root, int count) {
        if (root != NULL) {
            count+=1;
           count = traverse(root->left, count);
            count = traverse(root->right, count);
        }
        
        return count;
    }
    int countNodes(TreeNode* root) {
        return traverse(root, 0);
    }
};