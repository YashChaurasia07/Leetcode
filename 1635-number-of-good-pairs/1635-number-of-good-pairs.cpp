class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>mp;
        int cnt = 0;
        for(auto it : nums)
        {
            if(mp.find(it)==mp.end()){
                mp[it]++;
            }
            else 
            {
                cnt += mp[it];
                mp[it]++;
            }
        }
        return cnt;
    }
};