class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int k) {
        int s = 0, e = nums.size()-1, mid = s + (e-s)/2, ans = -1, ans2 = -1;
        vector<int> v;
        while(s<=e){
            if(nums[mid] == k){
                ans = mid;
                e = mid -1;   
            }
            else if( nums[mid]>k){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        s = 0; e = nums.size()-1; mid = s + (e-s)/2;
        while(s<=e){
            if(nums[mid] == k){
                ans2 = mid;
                s = mid + 1;   
            }
            else if( nums[mid]>k){
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        v.push_back(ans);
        v.push_back(ans2);
        return v;

    }
};