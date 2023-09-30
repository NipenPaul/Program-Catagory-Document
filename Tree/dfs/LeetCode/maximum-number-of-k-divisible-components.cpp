class Solution {
public:
    int cnt = 0;
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        vector<vector<int>> adj(n);
        for(auto &it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(n, 0);
        vector<int> parent(n, 0);
        cnt = 0;
        int sum = 0;
        dfs(0, adj, values, k, vis, parent);
        return cnt;
    }
    void dfs(int u, vector<vector<int>>&adj, vector<int>&val, int k, vector<int>&vis, vector<int>&parent){
        vis[u] = true;
        for(int &v: adj[u]){
            if(vis[v] == false){
                parent[v] = u;
                dfs(v, adj, val, k, vis, parent);
            }
        }
        if(val[u] % k == 0){
            cnt++;
            val[u] = 0;
        }else{
           val[parent[u]] += val[u];
        }
    }
};