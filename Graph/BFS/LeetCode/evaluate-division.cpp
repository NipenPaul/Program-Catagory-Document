class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        vector<vector<pair<int, double>>> adj(22);
        int k = 1;
        map<string, int> mp;
        for(int i = 0; i < equations.size(); i++){
            if(mp[equations[i][0]] == 0){
                mp[equations[i][0]] = k;
                k++;
            }
            if(mp[equations[i][1]] == 0){
                mp[equations[i][1]] = k;
                k++;
            }
            int u = mp[equations[i][0]];
            int v = mp[equations[i][1]];
            double w = values[i];
            adj[u].push_back({v, w});
            adj[v].push_back({u, 1.0/w});
        }
        vector<double> ans;
        for(int i = 0; i < queries.size(); i++){
            int s = mp[queries[i][0]], d = mp[queries[i][1]];
            if(s == 0 || d == 0){
                ans.push_back(-1.0);
            }else if(s == d){
                ans.push_back(1.0);
            }else{
                vector<bool> vis(k+2, 0);
                vector<double> path(k+2, 1);
                ans.push_back(bfs(s, d, adj, vis, path));
            }
        }
        return ans;
    }
    double bfs(int s, int d, vector<vector<pair<int, double>>>&adj, vector<bool>&vis, vector<double>&path){
        vis[s] = true;
        queue<int> que;
        que.push(s);
        while(!que.empty()){
            int u = que.front();
            que.pop();
            for(int i = 0; i < adj[u].size(); i++){
                int v = adj[u][i].first;
                double w = adj[u][i].second;
                if(!vis[v]){
                    que.push(v);
                    vis[v] = true;
                    path[v] = path[u] * w;
                    if(v == d){
                        return path[v];
                    }
                }
            }
        }
        return -1.0;
    }
};
