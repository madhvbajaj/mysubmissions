class Solution {
public:
    int help(int n,vector<int> &dp){
        if(n==1)return 1;
        if(n==2)return 2;
        if(dp[n] != 0) return dp[n];
        dp[n]=help(n-1,dp)+help(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int>dp(n+2,0);
        return help(n,dp);
         
    }
};