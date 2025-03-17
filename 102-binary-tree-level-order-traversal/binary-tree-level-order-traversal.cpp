/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        // validate the input
        if(root == nullptr)
        {
            return {};
        }    

        // declarations
        queue<TreeNode*> levels;
        vector<vector<int>> ans;

        // initialize;
        levels.push(root);

        // level order traversal
        while(!levels.empty())
        {
            int level_size = levels.size();
            vector<int> level;
            while(level_size--)
            {
                auto node = levels.front();
                levels.pop();
                level.push_back(node->val);

                if(node->left)
                {
                    levels.push(node->left);
                }

                if(node->right)
                {
                    levels.push(node->right);
                }
            }

            ans.push_back(level);
        }

        // return the answer
        return ans;

    }
};