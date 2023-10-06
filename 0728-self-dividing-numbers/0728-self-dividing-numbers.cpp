class Solution {
public:
    void isPos(vector<int> &ans,int num)
    {
        int n = num;
        while(n)
        {
            int digit = n % 10;
            if(digit == 0) return;
            if(num % digit != 0) return;
            n = n / 10;
        }
        ans.push_back(num);
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++) isPos(ans,i);
        return ans;
    }
};