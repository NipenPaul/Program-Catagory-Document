class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> adj(n);
        for(int i = 0; i < manager.size(); i++){
            if(manager[i] != -1){
                adj[manager[i]].push_back(i);
            }
        }
        vector<int> dist(n, -1);
        dist[headID] = informTime[headID];
        cout << dist[headID] << endl;
        function<void(int)> dfs = [&](int u){
           // cout << u << ": " << dist[u] << endl;
            for(int &v: adj[u]){
                if(dist[v] != -1) continue;
                dist[v] = dist[u] + informTime[v];
                dfs(v);
                //cout << v << ": " << dist[v] << endl;
            }
        };
        dfs(headID);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(adj[i].size() == 0){
                ans = max(ans, dist[i]);
            }
        }
        return ans;
    }
};
