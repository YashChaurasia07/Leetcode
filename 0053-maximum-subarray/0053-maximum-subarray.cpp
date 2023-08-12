class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int t= 0;
        int sum = INT_MIN;
        for(int i = 0; i<nums.size(); i++)
        {
            t +=nums[i];
            sum = max(t,sum);
            if(t<=0) t = 0;
        }
        return sum;
    }
};
