class Solution {
public:
    double knightProbability(int n, int k, int row, int column) {
        int fx[] = {1,1,-1,-1,2,2,-2,-2};
        int fy[] = {2,-2,2,-2,1,-1,1,-1};
        vector dp(k+1, vector (n, vector<double>(n, 0.0)));
        dp[0][row][column] = 1;
        for(int moves = 1; moves <= k; moves++){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    for(int l = 0; l < 8; l++){
                        int x = i - fx[l];
                        int y = j - fy[l];
                        if(x >= 0 && y >= 0 && x < n && y < n){
                            dp[moves][i][j] += dp[moves-1][x][y] / 8;
                        }
                    }
                }
            }
        }
        double ans = 0.0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ans += dp[k][i][j];
            }
        }
        return ans;
    }
};
