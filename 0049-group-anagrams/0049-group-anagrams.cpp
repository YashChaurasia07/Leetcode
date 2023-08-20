class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> m;
        vector<vector<string>> ans;
        for(int i = 0; i<strs.size();i++)
        {
            string x=strs[i];
            sort(x.begin(), x.end());
            m[x].push_back(strs[i]);
        }
        for(auto it: m)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};