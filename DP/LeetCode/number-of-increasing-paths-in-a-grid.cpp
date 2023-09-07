class Solution {
public:
    int countPaths(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int mod = 1e9+7;
        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        // 4 cell visit..
        int fx[] = {-1,1,0,0};
        int fy[] = {0,0,-1,1};
        function<int(int, int)> dfs = [&](int i, int j)->int{
            if(dp[i][j] != -1) return dp[i][j];
            int ans = 1;
            for(int k = 0; k < 4; k++){
                int x = fx[k]+i;
                int y = fy[k]+j;
                if(x >= 0 && y >= 0 && x < n && y < m && grid[i][j] < grid[x][y]){
                    ans += dfs(x, y);
                    ans %= mod;
                }
            }
            return dp[i][j] = ans;
        };
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                ans = (ans + dfs(i, j)) % mod;
            }
        }
        return ans;
    }
};
