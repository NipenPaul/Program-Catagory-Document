class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int dp[n+5][n+5];
        int inf = (int)1e9;
        int ans = (int)1e9;
        
        auto valid = [&](int x, int y){
            return x >= 1 && y >= 1 && x <= n && y <= n;
        };

        int fx[] = {-1,-1, -1};
        int fy[] = {-1, 0, 1};

        for(int k = 1; k <= n; k++){
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    dp[i][j] = inf;
                    if(i == 1){
                        dp[i][j] = mat[i-1][j-1];
                    }
                }
            }
            for(int i = 2; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    for(int p = 0; p < 3; p++){
                        int x = i+fx[p];
                        int y = j+fy[p];
                        if(valid(x, y) && dp[i][j] > dp[x][y]+mat[i-1][j-1]){
                            dp[i][j] = dp[x][y]+mat[i-1][j-1];
                        }
                    }
                }
            }
            for(int i = 1; i <= n; i++){
                ans = min(ans, dp[n][i]);
            }
        }
        return ans;
    }
};
