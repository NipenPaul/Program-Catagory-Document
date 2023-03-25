class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> vis(n);
        for(auto &x: edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        long long ans = 0, sum = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                int cntNode = bfs(i, adj, vis);
                ans += (sum * (long long)cntNode);
                sum += cntNode;
            }
        }
        return ans;
    }
    int bfs(int src, vector<vector<int>>&adj, vector<bool>&vis){
        vis[src] = true;
        queue<int> que;
        que.push(src);
        int cnt = 0;
        while(!que.empty()){
            int u = que.front();
            que.pop();
            cnt++;
            for(int &v: adj[u]){
                if(!vis[v]){
                    que.push(v);
                    vis[v] = true;
                }
            }
        }
        return cnt;
    }
};
