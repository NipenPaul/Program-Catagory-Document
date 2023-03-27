class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m+2, vector<int>(n+2, 0));
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(i-1 >= 1 && j-1 >= 1)
                    dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i-1][j-1];
                else if(i-1 >= 1)
                     dp[i][j] = dp[i-1][j] + grid[i-1][j-1];
                else if(j-1 >= 1)
                     dp[i][j] = dp[i][j-1] + grid[i-1][j-1];
                else dp[i][j] = grid[i-1][j-1];
               // cout << grid[i-1][j-1] << "," << dp[i][j] << " ";
            }
            //cout << endl;
        }
        return dp[m][n];
    }
};
