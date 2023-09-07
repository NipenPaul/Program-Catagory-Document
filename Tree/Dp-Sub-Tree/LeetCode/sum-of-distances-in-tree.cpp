class Solution {
public:
    vector<int> adj[30005];
    vector<int> dep, sub, sum;
    int n;
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        this->n = n;
        dep.resize(n+1); sub.resize(n+1); sum.resize(n);
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        dfs(0);
        for(int i = 0; i < n; i++){
            sum[0] += dep[i];
        }
        dfs2(0);
        return sum;
    }
    void dfs(int u, int pr = -1){
        sub[u] = 1;
        for(auto x: adj[u]){
            if(x == pr) continue;
            dep[x] = dep[u] + 1;
            dfs(x, u);
            sub[u] += sub[x];
        }
    }
    void dfs2(int u, int pr = -1){
        for(auto x: adj[u]){
            if(x == pr) continue;
            sum[x] = sum[u] - sub[x] + (n - sub[x]);
            dfs2(x, u);
        }
    }
};
