class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        map<int, int> ma1, ma2;
        int n = adjacentPairs.size();
        vector<vector<int>> adj(n+2);
        int k = 1;
        for(auto &it: adjacentPairs){
            if(ma1[it[0]] == 0){
                ma1[it[0]] = k;
                ma2[k] = it[0];
                k++;
            }
            if(ma1[it[1]] == 0){
                ma1[it[1]] = k;
                ma2[k] = it[1];
                k++;
            }
            int u = ma1[it[0]];
            int v = ma1[it[1]];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> v;
        for(int i = 1; i < k; i++){
             if(adj[i].size() == 1){
                 v = dfs(n, i, adj);
                 break;
           }
        }
        for(int &x: v){
            x = ma2[x];
        }
        return v;
    }
    vector<int> dfs(int n, int src, vector<vector<int>> &adj){
        vector<int> ans;
        stack<int> st;
        vector<int> vis(n+2, 0);
        st.push(src);
        vis[src] = 1;
        ans.push_back(src);
        while(!st.empty()){
            int u = st.top();
            st.pop();
            for(int &v: adj[u]){
                if(vis[v] == 0){
                    vis[v] = 1;
                    ans.push_back(v);
                    st.push(v);
                }
            }
        }
        return ans;
    }
};