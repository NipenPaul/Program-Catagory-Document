class Solution {
public:
    int maxSatisfaction(vector<int>& sat) {
        sort(sat.begin(), sat.end());
        int n = sat.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return rec(sat, dp, 0, 1, n);
    }
    int rec(vector<int>&sat, vector<vector<int>>&dp, int ind, int k, int n){
        if(ind == n) return 0;
        if(dp[ind][k] != -1){
            return dp[ind][k];
        }
        return dp[ind][k] = max(sat[ind]*k+rec(sat, dp, ind+1, k+1, n), rec(sat, dp, ind+1, k, n));
    }
};
