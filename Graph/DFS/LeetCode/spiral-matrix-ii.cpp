class Solution {
public:
    int n, k;
    vector<pair<int,int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
    bool isValid(int x, int y){
        return x >= 0 && y >= 0 && x < n && y < n;
    }
    void dfs(int i, int j, bool up, vector<vector<int>>&vis){
        if(!isValid(i, j) || vis[i][j]) return;
        vis[i][j] = k;
        k++;
        if(up){
            dfs(i-1, j, true, vis);
        }
        for(auto &it: dir){
            int x = i+it.first;
            int y = j+it.second;
            if(it.first == -1 && it.second == 0){
                dfs(x, y, true, vis);
            }else{
                dfs(x, y, false, vis);
            }
        }
    }
   vector<vector<int>> generateMatrix(int nn) {
        n = nn;
        k = 1;
        vector<vector<int>>vis(n, vector<int>(n, 0));
        dfs(0, 0, false, vis);
        return vis;
    }
};
