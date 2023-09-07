class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    return bfs(i, j, grid);
                }
            }
        }
        return 0;
    }
    int bfs(int x, int y, vector<vector<int>>&grid){
        int fx[] = {-1,1,0,0};
        int fy[] = {0,0,-1,1};
        int n = grid.size();
        queue<pair<int, int>> que;
        que.push({x, y});
        queue<pair<int, int>> queA;
        queA.push({x, y});
        grid[x][y] = 2;
        while(!que.empty()){
            x = que.front().first;
            y = que.front().second;
            que.pop();
            for(int i = 0; i < 4; i++){
                int xx = x+fx[i];
                int yy = y+fy[i];
                if(xx >= 0 && yy >= 0 && xx < n && yy < n && grid[xx][yy] == 1){
                    que.push({xx, yy});
                    queA.push({xx, yy});
                    grid[xx][yy] = 2;
                }
            }
        }
        int dis = 0;
        while(!queA.empty()){
            int sz = queA.size();
            while(sz > 0){
                x = queA.front().first;
                y = queA.front().second;
                queA.pop();
                for(int i = 0; i < 4; i++){
                    int xx = x+fx[i];
                    int yy = y+fy[i];
                    if(xx >= 0 && yy >= 0 && xx < n && yy < n){
                        if(grid[xx][yy] == 1)
                            return dis;
                        else if(grid[xx][yy] == 0){
                            grid[xx][yy] = -1;
                            queA.push({xx, yy});
                        }
                    }
                }
                sz--;
            }
            dis++;
        }
        return dis;
    }
};
