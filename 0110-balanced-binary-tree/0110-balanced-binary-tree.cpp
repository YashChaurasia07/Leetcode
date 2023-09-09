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
   int maxd(TreeNode* root)
    {
        if (root == NULL) return 0;
        int lh = maxd(root->left);
        if (lh == -1) return -1;         
        int rh = maxd(root->right);
        if (rh == -1) return -1;
        if (abs(lh - rh) > 1) return -1; 
        return 1 + max(lh, rh);
    }
    bool isBalanced(TreeNode* root) {
        int result = maxd(root);
        return result != -1; 
    }
};