class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>> ans;
        vector<vector<int>> temp(g.size()+1);
        for(int i = 0; i< g.size(); i++)
        {
            int size = g[i];
            temp[size].push_back(i);
            if(temp[size].size()==size)
            {
                ans.push_back({});
                swap(ans.back(),temp[size]);
            }
        }
        return ans;
    }
};