class Solution {
public:
    bool ok;
    int cnt = 0;
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1 && !vis[i][j]){
                    ok = true;
                    cnt = 0;
                    dfs(i, j, grid, n, m, vis);
                    if(ok) ans += cnt;
                }
            }
        }
        return ans;
    }
    void dfs(int i, int j, vector<vector<int>>&grid, int n, int m, vector<vector<int>>&vis){
        vis[i][j] = true;
        cnt++;
        if(i == 0 || i == n-1){
            ok = false;
        }
        if(j == 0 || j == m-1){
            ok = false;
        }
        int fx[] = {-1, 0, 1, 0};
        int fy[] = {0, -1, 0, 1};
        for(int k = 0; k < 4; k++){
            int x = i+fx[k];
            int y = j+fy[k];
            if(x >= 0 && y >= 0 && x < n && y < m &&!vis[x][y] && grid[x][y] == 1){
                dfs(x, y, grid, n, m, vis);
            }
        }
    }
};
