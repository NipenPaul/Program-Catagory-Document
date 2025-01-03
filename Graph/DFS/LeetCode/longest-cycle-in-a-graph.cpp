class Solution {
public:
    int ans = -1;
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<bool> vis(n);
        
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                unordered_map<int, int> dist;
                dist[i] = 1;
                dfs(i, edges, dist, vis);
            }
        }
        return ans;
    }
    void dfs(int node, vector<int>&edges, unordered_map<int, int>&dist, vector<bool>&vis){
        vis[node] = true;
        int child = edges[node];
        if(child != -1 && !vis[child]){
            dist[child] = dist[node] + 1;
            dfs(child, edges, dist, vis);
        }else if(child != -1 && dist.count(child)){
            ans = max(ans, dist[node]-dist[child]+1);
        }
    }
};
