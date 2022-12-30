class Solution {
public:
    vector<int> adj[15];
    vector<vector<int>> ans;
    vector<int> v;
    int n;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n = graph.size();
        for(int i = 0; i < n; i++){
            for(int x: graph[i]){
                adj[i].push_back(x);
            }
        }
        dfs(0);
        return ans;
    }
    void dfs(int u){
        v.push_back(u);
        if(u == n-1){
            ans.push_back(v);
            return;
        }
        for(int x: adj[u]){
            dfs(x);
            v.pop_back();
        }
    }
};
