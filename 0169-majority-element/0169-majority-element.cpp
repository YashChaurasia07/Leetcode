class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size()-1;
        for(auto it:nums) m[it]++;

        for(auto it : m) 
        {
            if(it.second > n/2) return it.first;
        }
        return 0;
    }
};