class Solution {
public:
    const int MOD = 1e9+7;
    vector<long long> dp;
    long long rec(long long n){
        if(n == 0) return 1;
        if(dp[n] != -1) return dp[n];
        long long cur = rec(n-1) * (2 * n - 1) * n % MOD;
        return dp[n] = cur;
    }
    int countOrders(int n) {
        dp.resize(n+1, -1);
        return rec(n);
    }
};