class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        int fxx8[] = {-2,-2,-1,-1,1,1,2,2};
        int fyy8[] = {-1,1,-2,2,-2,2,-1,1};
        int n = grid.size();
        if(grid[0][0] != 0) return false; 
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] != (n*n-1)){
                    bool ok = false;
                    for(int k = 0; k < 8; k++){
                        int x = fxx8[k]+i;
                        int y = fyy8[k]+j;
                        if(x >= 0 && n > x && y >= 0 && n > y && grid[x][y] == (grid[i][j]+1)){
                            ok = true;
                        }
                    }
                    if(!ok){
                        //cout << i << " " << j << endl;
                        return false;
                    } 
                }
            }
        }
        return true;
    }
};
