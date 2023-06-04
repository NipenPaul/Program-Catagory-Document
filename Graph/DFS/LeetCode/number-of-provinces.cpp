class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>>adj(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j)continue;
                if(isConnected[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<bool> vis(n, false);
        function<void(int)> dfs = [&](int u){
            vis[u] = true;
            for(int &v: adj[u]){
                if(!vis[v]){
                    dfs(v);
                }
            }
        };
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                dfs(i);
                ans++;
            }
        }
        return ans;
    }
};
