class Solution {
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adj(n);
        for(auto &it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> ans(n, 0);
        dfs(0, labels, -1,adj, ans);
        return ans;
    }
    vector<int> dfs(int src, string &s, int pr, vector<vector<int>>&adj, vector<int> &ans){
        vector<int> cnt(26);
        cnt[s[src]-'a'] = 1;
        for(int &x: adj[src]){
            if(x == pr) continue;
              vector<int> child = dfs(x, s, src, adj, ans);
              for(int i = 0; i < 26; i++){
                  cnt[i] += child[i];
              }
        }
        ans[src] = cnt[s[src]-'a'];
        return cnt; 
        
    }
};
