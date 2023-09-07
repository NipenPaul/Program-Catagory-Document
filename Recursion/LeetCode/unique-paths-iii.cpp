class Solution {
public:
    int ans, n, m, b;
    int uniquePathsIII(vector<vector<int>>& grid) {
        ans = 0, b = 0;
        n = grid.size();
        m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 0){
                   b++;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    dfs(i, j, grid, b, vis);
                    i = n;
                    j = m;
                }
            }
        }
        return ans;
    }
    bool ck(int x, int y){
        return x >= 0 && y >= 0 && x < n && y < m;
    }
    void dfs(int sn, int sm, vector<vector<int>>& grid, int k, vector<vector<bool>>&vis){
        if(k == -1 && grid[sn][sm] == 2){
            ans++;
            return;
        }
        int fx4[] = {-1,1,0,0};
        int fy4[] = {0,0,-1,1};
        vis[sn][sm] = true;
        for(int i = 0; i < 4; i++){
            int x = fx4[i]+sn;
            int y = fy4[i]+sm;
            if(ck(x, y) && grid[x][y] != -1 && vis[x][y] == false){
                dfs(x, y, grid, k-1, vis);
            }
        }
        vis[sn][sm] = false;
    }
};
