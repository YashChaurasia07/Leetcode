class Solution {
public:
    int bata_bhai(int n,vector<int> &dp)
    {
        if(n<=1) return n;
        if(dp[n] != -1) return dp[n];
        return dp[n] = bata_bhai(n-1,dp) + bata_bhai(n-2,dp);
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return bata_bhai(n,dp);
    }
};