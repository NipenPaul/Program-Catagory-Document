class Solution {
public:
    int ans;
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n), readj(n);
        vector<bool> vis(n);
        for(auto &x: connections){
            adj[x[0]].push_back(x[1]);
            readj[x[1]].push_back(x[0]);
        }
        ans = 0;
        bfs(0, adj, readj, vis);
        return ans;
    }
    void bfs(int src, vector<vector<int>>&adj, vector<vector<int>>&readj, vector<bool>&vis){
        vis[src] = true;
        queue<int> que;
        que.push(src);
        while(!que.empty()){
            int u = que.front();
            que.pop();
            for(int &x: adj[u]){
                if(!vis[x]){
                    vis[x] = true;
                    ans++;
                    que.push(x);
                }
            }
            for(int &x: readj[u]){
                if(!vis[x]){
                    vis[x] = true;
                    que.push(x);
                }
            }
        }
    }
};
