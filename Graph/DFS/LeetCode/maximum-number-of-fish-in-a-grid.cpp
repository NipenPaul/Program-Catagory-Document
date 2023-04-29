class Solution {
public:
    int vis[12][12];
    int findMaxFish(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                memset(vis, -1, sizeof(vis));
                if(grid[i][j] != 0)
                {
                    int cnt = grid[i][j];
                    dfs(i, j, m, n, grid, cnt);
                    ans = max(ans, cnt);
                }
            }
        }
        return ans;
    }
    void dfs(int i, int j, int m, int n, vector<vector<int>>& grid, int &cnt){
        int fx[] = {-1,1,0,0};
        int fy[] = {0,0,-1,1};
        vis[i][j] = 1;
        for(int k = 0; k < 4; k++){
            int x = fx[k]+i;
            int y = fy[k]+j;
            if(x >= 0 && y >= 0 && x < m && y < n && vis[x][y] == -1 && grid[x][y] != 0){
                cnt += grid[x][y];
                dfs(x, y, m, n, grid, cnt);
            }
        }
    }
};
