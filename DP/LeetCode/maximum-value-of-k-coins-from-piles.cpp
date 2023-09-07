class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
       int n = piles.size();
       vector<vector<int>> dp(n+1, vector<int>(k+1, -1));
       return rec(n, k, piles, dp); 
    }
    int rec(int i, int coins, vector<vector<int>>& piles, vector<vector<int>>& dp){
        if(i == 0) return 0;
        if(dp[i][coins] != -1){
            return dp[i][coins];
        }
        int curSum = 0;
        for(int curCoins = 0; curCoins <= min((int)piles[i-1].size(), coins); curCoins++){
            if(curCoins > 0){
                curSum += piles[i-1][curCoins-1];
            }
            dp[i][coins] = max(dp[i][coins], rec(i-1, coins-curCoins, piles, dp)+curSum);
        }
        return dp[i][coins];
    }
};
