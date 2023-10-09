class Solution {
public:
    int lowerBound(vector<int>& nums, int target)
    {
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e)
        {
            mid = s + (e-s)/2;
            if(nums[mid]<target) s = mid+1;
            else if(nums[mid]>target) e = mid-1;
            else if(nums[mid] == target)
            {
                ans = mid;
                e = mid -1;
            }
            else return mid;
        }
        return ans;
    }
    int upperBound(vector<int>& nums, int target)
    {
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        int ans= -1;
        while(s<=e)
        {
            mid = s + (e-s)/2;
            if(nums[mid]<target) s = mid+1;
            else if(nums[mid]>target) e = mid-1;
            else if(nums[mid] == target)
            {
                ans = mid;
                s = mid +1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int lower = lowerBound(nums,target);
        int upper = upperBound(nums,target);
        return {lower,upper};
    }
};