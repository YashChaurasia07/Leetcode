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
// int c = 0;
//     int leftdekho(TreeNode *root)
//     {
//         if(root == NULL) return 0;
//         if(leftdekho(root->left)) leftdekho(root->left);
//         else leftdekho(root->right);
//         return c+1;
//     }
//     int rightdekho(TreeNode *root)
//     {
//         int check= 0;
//         c= 0;
//         if(root == NULL)
//         {
//             if(check == 1) c--;
//             return 0;
//         }
        
//         if(rightdekho(root->right))
//         {
//             rightdekho(root->right);
//             check = 0;
//         }
//         else 
//         {
//             rightdekho(root->left);
//             check = 1;
//         }
//         return c+1;
//     }
//     int widthOfBinaryTree(TreeNode* root) {
//         int l = leftdekho(root->left);
//         int r = rightdekho(root->right);
//         cout<<l<<endl<<r;
//         int temp = 0;
//         if(l==r)
//         {
//             temp = pow(2,(l-1));
//         }
//         return temp;
//     }
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int max_width = 0;
        queue<pair<TreeNode*, unsigned long long>> q; 
        q.push({root, 1ULL}); 
        while (!q.empty()) {
            int level_size = q.size();
            unsigned long long leftmost = q.front().second;
            for (int i = 0; i < level_size; ++i) {
                TreeNode* node = q.front().first;
                unsigned long long position = q.front().second;
                q.pop();
                if (i == level_size - 1) max_width = max(max_width, static_cast<int>(position - leftmost + 1));
                if (node->left) q.push({node->left, position * 2});
                if (node->right) q.push({node->right, position * 2 + 1});
            }
        }
        return max_width;
    }
};