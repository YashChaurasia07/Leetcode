class Solution {
public:
    vector<int> genrow(int r)
    {
        int ans = 1;
        vector<int> ans1;
        ans1.push_back(1);
        for(int i = 1; i<r; i++)
        {
            ans = ans*(r-i);
            ans /= i;
            ans1.push_back(ans);
        }
        return ans1;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i = 1; i<=numRows;i++)
        {
            res.push_back(genrow(i));
        }
        return res;
    }
};