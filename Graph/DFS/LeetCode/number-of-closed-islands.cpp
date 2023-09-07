class Solution {
public:
    bool ok;
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size(), ans = 0;
        int m = grid[0].size();
        vector<vector<int>> vis(n+1, vector<int>(m+1, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 0 && !vis[i][j]){
                    ok = true;
                    dfs(grid, i, j, n, m, vis);
                    if(ok) ans++;
                }
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>>&grid, int i, int j, int n, int m, vector<vector<int>>&vis){
        int fx[] = {-1, 0, 1, 0};
        int fy[] = {0, -1, 0, 1};
        vis[i][j] = true;

        if(i == 0 || i == n-1){ok = false;}
        if(j == 0 || j == m-1) {ok = false;}

        for(int k = 0; k < 4; k++){
            int x = i+fx[k];
            int y = j+fy[k];
            if(x >= 0 && y >= 0 && x < n && y < m && grid[x][y] == 0 && !vis[x][y] ){
                dfs(grid, x, y, n, m, vis);
            }
        }
    }
};
