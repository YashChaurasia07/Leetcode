class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> v; // to store max value of each window
        if(k ==0) return v; // if window size is empty then no need to find ans
        int i = 0,j = 0;
        list<int>l; // to store maximum value
        while(j<n)
        {
            while(l.size() > 0 && l.back() < nums[j]) // if cur element is max then pop each value from list(front)
            {
                l.pop_back();
            }
            l.push_back(nums[j]); // push max value
            if(j-i+1==k) // window size hit
            {
                v.push_back(l.front()); // store ans
                if(nums[i] == l.front()) l.pop_front(); 
                i++;
            }
            j++;
        }
        return v;
    }
};