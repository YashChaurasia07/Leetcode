class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        int n = nums2.size();
        stack<int> s;
        for(int i = n-1;i>=0;i--)
        {
            int t = nums2[i];
            while(!s.empty() && s.top() <= t) s.pop();
            int r = (s.empty()) ? -1 : s.top();
            m.insert({t,r});
            s.push(t);
        }
        vector<int> ans;
        for(auto it : nums1) ans.push_back(m[it]);
        return ans;
    }
};