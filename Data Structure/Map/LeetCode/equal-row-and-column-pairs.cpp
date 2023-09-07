class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
       map<vector<int>, int> mp;
       int n = grid.size();
       for(int i = 0; i < n; i++){
           vector<int> v;
            for(int j = 0; j < n; j++){
               v.push_back(grid[i][j]);
            }
            mp[v]++;
       }
       int cnt = 0;
        for(int i = 0; i < n; i++){
           vector<int> v;
           for(int j = 0; j < n; j++){
               v.push_back(grid[j][i]);
           }
           cnt += mp[v];
       }
       return cnt; 
    }
};
