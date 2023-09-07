class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int ans = 0;
        vector<vector<int>> adj(n+1);
        for(auto &it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            vector<int> vis(n+1, 0);
            vector<int> v;
        }
        vector<int> vis(n+1, 0);
        for(int i = 0; i < n; i++){
            vector<int> v;
            if(!vis[i]){
                dfs(i, vis, v, adj);
            }
            if(v.size() == 1){
                ans++;
                continue;
            }
            if(v.size() == 0){
                continue;
            }
            int cnt = 0;
            for(int j = 0; j < v.size(); j++){
                for(int k = 0; k < v.size(); k++){
                    if(j == k) continue;
                    
                    for(auto &it: edges){
                        if((it[0] == v[j] && it[1] == v[k]) || (it[1] == v[j] && it[0] == v[k])){
                            //cout << v[j] << " " << v[k] << endl;
                            cnt++;
                            break;
                        }
                    }
                }
            }
            int nn = v.size();
            int d = (nn*(nn-1)) / 2;
            if(d*2 == cnt) ans++;
            //cout << cnt << endl;
            //cout << d << endl;
        }
        return ans;
    }
    void dfs(int u, vector<int>&vis, vector<int>&v, vector<vector<int>>&adj){
        vis[u] = true;
        v.push_back(u);
        for(int &vx: adj[u]){
            if(!vis[vx]){
                dfs(vx, vis, v, adj);
            }
        }
    }
};
