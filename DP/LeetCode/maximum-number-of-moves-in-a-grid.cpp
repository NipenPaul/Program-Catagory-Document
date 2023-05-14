class Solution {
public:
    int mx = 0;
    int maxMoves(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        int dx[] = {-1, 0, 1};
        int dy[] = {1, 1, 1};
        vector<vector<int>> dp(n+1, vector<int>(m+1));
        for(int col = m-1; col >= 0; col--){
            for(int row = 0; row < n; row++){
                if(col == m-1){
                    dp[row][col] = 0;
                }else{
                     for(int k = 0; k < 3; k++){
                        int x = row+dx[k];
                        int y = col+dy[k];
                        if(x >= 0 && y >= 0 && x < n && y < m ){
                            if(grid[row][col] < grid[x][y])
                             dp[row][col] = max(dp[row][col], dp[x][y]+1);
                        }
                     }
                }
            }
        }
        for(int i = 0; i < n; i++){
            ans = max(ans, dp[i][0]);
        }
        return ans;
        /*
        for(int i = 0; i < n; i++){
            vector<vector<int>> vis(n+1, vector<int>(m+1, 0));
            mx = 0;
            dfs(i, 0, vis, 0, grid, n, m);
            //cout << endl;
            ans = max(ans, mx);
        }
        return ans;*/
        
    }
    /*void dfs(int i, int j, vector<vector<int>>&vis, int cnt, vector<vector<int>>& grid, int n, int m){
        vis[i][j] = true;
        int dx[] = {-1, 0, 1};
        int dy[] = {1, 1, 1};
       // cout << i << " " << j << endl;
        for(int k = 0; k < 3; k++){
            int x = i+dx[k];
            int y = j+dy[k];
            if(x >= 0 && y >= 0 && x < n && y < m && !vis[x][y] && grid[i][j] < grid[x][y]){
                mx = max(cnt+1, mx);
                dfs(x, y, vis, cnt+1, grid, n, m);
            }
        }
    }*/
};
