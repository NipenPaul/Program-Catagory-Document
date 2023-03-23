class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
        vector<bool>vis(n);
        for(auto &x: connections){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        int ct = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                ct++;
                dfs(adj, i, vis);
            }
        }
        if(connections.size() >= n-1){
            return ct-1;
        }
        return -1;
    }
    void dfs(vector<vector<int>>&adj, int src, vector<bool>&vis){
        vis[src] = true;
        for(int &x: adj[src]){
            if(!vis[x]){
                dfs(adj, x, vis);
            }
        }
    }
};
