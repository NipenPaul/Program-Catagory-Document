class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n+1, -1);
        for(int i = 0; i <= n; i++){
            if(dp[i] == -1){
                rec(i, dp);
            }
        }
        return dp;
    }
    int rec(int n, vector<int> &dp){
        if(dp[n] != -1) return dp[n];
        if(n == 0){
            return dp[0] = 0;
        }
        return dp[n] = n % 2 + rec(n/2, dp);
    }
};

// O(n) solution

vector<int> countBits(int n) {
    vector<int> ans(n+1);
    ans[0] = 0;
    for (int i = 1; i <= n; i++) {
        ans[i] = ans[i & (i-1)] + 1;
    }
    return ans;
}
