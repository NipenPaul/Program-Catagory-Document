class Solution {
public:
    vector<int> adj[2005];
    int color[2005]; int B, W;
    int pr[2005];
    bool possibleBipartition(int n, vector<vector<int>>& dis) {
        for(int i = 0; i < dis.size(); i++){
            adj[dis[i][0]].push_back(dis[i][1]);
            adj[dis[i][1]].push_back(dis[i][0]);
        }
        for(int i = 1; i <= n; i++){
            color[i] = 0;
        }
        B = 1; W = 2;
        bool ok = true;
        for(int i = 1; i <= n; i++){
            if(color[i] == 0){
                if(bfs(i) == false){
                    ok = false;
                    break;
                }
            }
        }
        return ok;
    }
    bool bfs(int s){
        color[s] = B;
        queue<int> que;
        que.push(s);
        while(!que.empty()){
            int u = que.front();
            que.pop();
            for(int i = 0; i < adj[u].size(); i++){
                int v = adj[u][i];
                if(color[v] == 0){
                    if(color[u] == B){
                        color[v] = W;
                    }else if(color[u] == W){
                        color[v] = B;
                    }
                    pr[v] = u;
                    que.push(v);
                }else if(pr[u] != v && color[u] == color[v]){
                    return false;
                }
            }
        }
        return true;
    }
};
