class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size();
        vector<vector<int>> adj(n);
        map<pair<int, int>, int> mp;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int cnt = 0;
                for(int k = 0; k < strs[0].size(); k++){
                    if(strs[i][k] != strs[j][k]){
                        cnt++;
                    }
                }
                //cout << cnt << '\n';
                if(cnt <= 2 && mp[{i, j}] == 0 && mp[{j, i}] == 0 && i != j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                    mp[{i, j}] = 1;
                    mp[{j, i}] = 1;
                   // cout << i << " " << j << '\n';
                }
            }
        }
        vector<int> vis(n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                ans++;
                bfs(i, adj, vis);
            }
        }
        return ans;
    }
    void bfs(int &src, vector<vector<int>>&adj, vector<int>&vis){
        vis[src] = true;
        queue<int> que;
        que.push(src);
        while(!que.empty()){
            int u = que.front();
            que.pop();
            for(int &v: adj[u]){
                if(!vis[v]){
                    que.push(v);
                    vis[v] = true;
                }
            }
        }
    }
};
