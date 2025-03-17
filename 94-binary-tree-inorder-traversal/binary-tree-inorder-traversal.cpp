class Solution {
public:
    TreeNode* find_pre(TreeNode* cur) {
        TreeNode* pre = cur->left;
        while (pre->right != NULL && pre->right != cur) {
            pre = pre->right;
        }
        return pre;
    }

    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* cur = root;
        vector<int> ans;

        while (cur != NULL) {
            if (cur->left == NULL) {
                ans.push_back(cur->val);
                cur = cur->right;
            } else {
                TreeNode* pre = find_pre(cur);
                if (pre->right == NULL) {
                    pre->right = cur;
                    cur = cur->left;
                } else {
                    pre->right = NULL;
                    ans.push_back(cur->val);
                    cur = cur->right;  // Fix: Move cur forward
                }
            }
        }
        return ans;
    }
};
