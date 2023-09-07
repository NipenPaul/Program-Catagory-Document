class Solution {
public:
    int collectTheCoins(vector<int>& coins, vector<vector<int>>& edges) {
        int n = coins.size();
        vector<unordered_set<int>> adj(n);
        for(vector<int>&e: edges){
            adj[e[0]].insert(e[1]);
            adj[e[1]].insert(e[0]);
        }
        queue<int> empty_leaves;
        for(int i = 0; i < n; i++){
            if(adj[i].size() == 1 && !coins[i]){
                empty_leaves.push(i);
            }
        }
        // removes all leaves node which no coins
        
        while(!empty_leaves.empty()){
            int u = empty_leaves.front();
            empty_leaves.pop();
            for(int v: vector<int>(adj[u].begin(), adj[u].end())){
                adj[u].erase(v);
                adj[v].erase(u);
                if(adj[v].size() == 1 && !coins[v]){
                    empty_leaves.push(v);
                }
                
            }
        }
        
        // leaves node
       queue<int> leaves;
        for(int i = 0; i < n; i++){
            if(adj[i].size() == 1){
                leaves.push(i);
            }
        }
       
        for(int i = 0; i < 2; i++){
            int sz = leaves.size();
            for(int j = 0; j < sz; j++){
                int u = leaves.front();
                leaves.pop();
                for(int v: vector<int>(adj[u].begin(), adj[u].end())){
                    adj[u].erase(v);
                    adj[v].erase(u);
                    if(adj[v].size() == 1){
                        leaves.push(v);
                    }
                }
            }
        }
        if(leaves.size() == 0) return 0;
        int root = leaves.front();
        int sz = dfs(root, adj, -1);
        return (sz-1)*2;
        
        return 0;
    }
    int dfs(int src, vector<unordered_set<int>>&adj, int pa){
        int ans = 1;
        for(int v: adj[src]){
            if(pa != v){
                ans += dfs(v, adj, src);
            }
        }
        return ans;
    }
};
