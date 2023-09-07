class Solution {
public:
    int numMusicPlaylists(int n, int goal, int k) {
        vector dp(goal+1, vector<long>(n+1, -1));
        return rec(goal, n, n, k, dp);
    }
    long rec(int i, int j, int n, int k, vector<vector<long>>&dp){
        if(i == 0 && j == 0) return 1;
        if(i == 0 || j == 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        const int MOD = 1e9+7;
        dp[i][j] = (rec(i-1, j-1, n, k, dp) * (n-j+1)) % MOD;
        if(j > k){
            dp[i][j] += (rec(i-1, j, n, k, dp) * ((j - k))) % MOD;
            dp[i][j] %= MOD;
        }
        return dp[i][j];
    }
};
