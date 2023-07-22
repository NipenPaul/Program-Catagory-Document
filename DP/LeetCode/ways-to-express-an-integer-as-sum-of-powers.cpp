class Solution {
public:
    int numberOfWays(int n, int x) {
        vector<vector<int>> dp(305, vector<int>(305, -1));
        return rec(n, 1, x, dp);
    }
    int rec(int sum, int pos, int x, vector<vector<int>>&dp){
        int mod = 1e9+7;
        if(sum < 0) return 0;
        if(dp[sum][pos] != -1) return dp[sum][pos];
        int pw = pow(pos, x);
        if(sum == pw) return 1;
        if(sum < pw) return 0;
        int ans = 0;
        ans = ans + rec(sum-pw, pos+1, x, dp) % mod;
        ans %= mod;
        ans = ans + rec(sum, pos+1, x, dp) % mod;
        ans %= mod;
        return dp[sum][pos] = ans;
    }
};
