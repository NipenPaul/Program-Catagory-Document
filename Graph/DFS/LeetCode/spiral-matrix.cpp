class Solution {
public:
    vector<int> ans;
    int n, m;
    bool vis[12][12];
    vector<pair<int,int>> dir = {{0,1},{1,0},{0,-1},{-1,0}};
    bool isValid(int x, int y){
        return x >= 0 && y >= 0 && x < n && y < m && !vis[x][y];
    }
    void dfs(int i, int j,vector<vector<int>>& matrix, bool up){
        if(!isValid(i, j)) return;
        ans.push_back(matrix[i][j]);
        vis[i][j] = true;
        if(up){
            dfs(i-1, j, matrix, true);
        }
        for(auto &it: dir){
            int x = i+it.first;
            int y = j+it.second;
            if(it.first == -1 && it.second == 0){
                dfs(x, y, matrix, true);
            }else{
                dfs(x, y, matrix, false);
            }
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();
        memset(vis,0, sizeof(vis));
        ans.clear();
        dfs(0, 0, matrix, false);
        return ans;
    }
};
