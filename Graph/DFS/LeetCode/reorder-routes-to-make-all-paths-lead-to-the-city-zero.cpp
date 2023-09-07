class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int, int>>> adj(n);
        vector<bool> vis(n);
        for(auto &x: connections){
            adj[x[0]].push_back({x[1], 1});
            adj[x[1]].push_back({x[0], 0});
        }
        int ans = 0;
        dfs(0, -1, adj, ans);
        return ans;
    }
    void dfs(int src, int pa, vector<vector<pair<int, int>>>&adj, int &ans){
        for(auto &[x, sign]: adj[src]){
            if(pa != x){
                ans += sign;
                dfs(x, src, adj, ans);
            }
        }
    }
};
