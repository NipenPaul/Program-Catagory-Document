class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1, -1);
        return min(rec(0, n, cost, dp), rec(1, n, cost, dp));
    }
    int rec(int ind, int n, vector<int>&cost, vector<int>&dp){
        if(ind >= n) return 0;
        if(dp[ind] != -1) return dp[ind];
        int x = cost[ind]+rec(ind+1, n, cost, dp);
        int y = cost[ind]+rec(ind+2, n, cost, dp);
        return dp[ind] = min(x, y);
    }
};