class Solution {
public:
    int mod = 1e9+7;
    int dp[101][101][101];
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(dp, -1, sizeof(dp));
       return rec(n, minProfit, group, profit, 0, 0, 0);   
    }
    int rec(int n, int minProfit, vector<int>& group, vector<int>& profit, int pos, int g, int p){
        if(pos == group.size()){
            return p >= minProfit;
        }
        if(dp[pos][g][p] != -1) return dp[pos][g][p];
        int totalWays = rec(n, minProfit, group, profit, pos+1, g, p);
        if(g+group[pos] <= n){
            totalWays += rec(n, minProfit, group, profit, pos+1, g+group[pos],  min(minProfit, p+profit[pos]));
        }
        return dp[pos][g][p] = totalWays % mod;
    }
};
