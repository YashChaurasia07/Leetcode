class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        for(int i = 0;i<n;i++)
        {
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j<n;j++)
            {
                if(j !=i+1 && nums[j] == nums[j-1]) continue;
                int l = n-1;
                int k = j+1;
                while(k<l)
                {
                    long long int sum = static_cast<long long int>(nums[i]) + 
                                   static_cast<long long int>(nums[j]) + 
                                   static_cast<long long int>(nums[l]) + 
                                   static_cast<long long int>(nums[k]);
                    if(sum>target) l--;
                    else if(sum<target) k++;
                    else
                    {
                        vector<int> temp = {nums[i], nums[j], nums[l], nums[k]};
                        v.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                }
            }
        }
        return v;
    }
};