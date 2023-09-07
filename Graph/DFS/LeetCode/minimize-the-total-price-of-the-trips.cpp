class Solution {
public:
    int dp[51][2];
    int dfs(vector<int>&contri, vector<int>&price, vector<vector<int>>&adj, int node, int pa, bool parentHalved){
        int res1 = (contri[node] * price[node]) / 2;
        int res2 = (contri[node] * price[node]);
        if(dp[node][parentHalved] != -1){
            return dp[node][parentHalved];
        }
        for(int &v: adj[node]){
            if(pa != v){
                res2 += dfs(contri, price, adj, v, node, false);
            }
        }
        if(parentHalved){
            return dp[node][parentHalved] = res2;
        }
        for(int &v: adj[node]){
            if(pa != v){
                res1 += dfs(contri, price, adj, v, node, true);
            }
        }
        return dp[node][parentHalved] = min(res1, res2);
    }
    int minimumTotalPrice(int n, vector<vector<int>>& edges, vector<int>& price, vector<vector<int>>& trips) {
        vector<vector<int>> adj(n);
        for(auto &it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> contri(n, 0);
        for(auto &it: trips){
            vector<int> cur;
            makeContri(it[0], it[1], adj, contri, cur, -1);
        }
        memset(dp, -1, sizeof(dp));
        return dfs(contri, price, adj, 0, -1, false);
    }
    void makeContri(int source, int destination, vector<vector<int>>&adj, vector<int>&contri, vector<int>&cur, int pa){
       cur.push_back(source);
       if(source == destination){
           for(int &x: cur){
              contri[x]++;
           }
           return;
       }
       for(int &v: adj[source]){
           if(v != pa){
               makeContri(v, destination, adj, contri, cur, source);
           }
       }
       cur.pop_back();
    }
};
