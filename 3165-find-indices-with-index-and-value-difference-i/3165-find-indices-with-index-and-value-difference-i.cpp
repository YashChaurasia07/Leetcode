class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        if(n == 1 && indexDifference == 0 && valueDifference == 0 ) return {0,0};
        for(int i = 0; i<n;i++)
        {
            for(int j = i+1; j<n;j++)
            {
                if(abs(i-j) >= indexDifference && abs(nums[i]-nums[j]) >= valueDifference) return{i,j};
            }
        }
        return {-1,-1};
    }
};