class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        int ans = 0;
        int n = bombs.size();
        vector<vector<int>> adj(n);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j) continue;
                long long x1, x2, y1, y2;
                x1 = bombs[i][0];
                x2 = bombs[j][0];
                y1 = bombs[i][1];
                y2 = bombs[j][1];
                long long distance = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
                if(distance <= (long long)bombs[i][2]*bombs[i][2]){
                    adj[i].push_back(j);
                }
            }
        }
        int cnt = 0;
        vector<int> vis(n, 0);
        function<void(int)> dfs = [&](int u){
            cnt++;
            vis[u] = true;
            for(int &v: adj[u]){
                if(!vis[v])
                    dfs(v);
            }
        };
        for(int i = 0; i < n; i++){
            cnt = 0;
            vis = vector<int>(n, 0);
            dfs(i);
            ans = max(ans, cnt);
        }
        return ans;
    }
};
