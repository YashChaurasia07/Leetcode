class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q; 
        vector<int> res;
        if(root == NULL) return res;
        q.push(root);
        while(q.empty()!=true)
        {
            vector<int> level;
            int n = q.size();
            for(int i = 0; i<n; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            int t = level[0];
            for(int i = 1; i<level.size(); i++) t = max(t,level[i]);
            res.push_back(t);
        }
        return res;
    }
};
    