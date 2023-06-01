class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int fx[] = {-1,-1,-1,0,1,1,1,0};
        int fy[] = {-1,0,1,1,1,0,-1,-1};
        int n = grid.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1){
            return -1;
        }
        dp[0][0] = 1;
        function<int(int, int)> bfs = [&] (int i, int j)->int{
            vis[i][j] = true;
            queue<int> que;
            que.push(i);
            que.push(j);
            while(!que.empty()){
                int u = que.front();
                que.pop();
                int v = que.front();
                que.pop();
                for(int k = 0; k < 8; k++){
                    int x = fx[k]+u;
                    int y = fy[k]+v;

                    if(x >= 0 && y >= 0 && x < n && y < n && !vis[x][y] && grid[x][y] == 0){
                        dp[x][y] = dp[u][v]+1;
                        vis[x][y] = true;
                        que.push(x);
                        que.push(y);
                    }
                }
            }
            return dp[n-1][n-1];
        };
        return bfs(0, 0);
    }
};
