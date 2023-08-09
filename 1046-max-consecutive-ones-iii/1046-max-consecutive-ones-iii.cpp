class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int i = 0;
        // int j = 0;
        // int c = 0;
        // int m = 0;
        // while(j<nums.size())
        // {
        //     if(nums[j]==0 && c!=k)
        //     {
        //         c++;
        //     }
        //     else if(nums[j]==0)
        //     {
        //         while(c!=0)
        //         {
        //             if(nums[i]==0) c--;
        //             if(nums[i]==1 && c!=k) break;
        //             i++;
        //         }
        //     }
        //     m = max(m,j-i+1);
        //     j++;
        // }
        // return m;
        int i = 0;
        int j = 0;
        int zeroCount = 0;
        int maxConsecutiveOnes = 0;
        while (j < nums.size()) {
            if (nums[j] == 0) {
                zeroCount++;
            }
            while (zeroCount > k) {
                if (nums[i] == 0) {
                    zeroCount--;
                }
                i++;
            }
            maxConsecutiveOnes = std::max(maxConsecutiveOnes, j - i + 1);
            j++;
        }
        return maxConsecutiveOnes;
    }
};