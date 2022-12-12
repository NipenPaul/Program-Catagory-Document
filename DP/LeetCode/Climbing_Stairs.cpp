// iterative
class Solution {
public:
    int climbStairs(int n) {
        vector<long long> dp(n+5, -1);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

// recursion
class Solution {
public:
    int climbStairs(int n) {
        vector<long long> dp(n+5, -1);
        dp[0] = 1;
        dp[1] = 1;
        rec(dp, n);
        return dp[n];
    }
    int rec(vector<long long> &dp, int n){
        if(dp[n] != -1) return dp[n];
        dp[n] = rec(dp, n-1) + rec(dp, n-2);
        return dp[n];
    }
};
