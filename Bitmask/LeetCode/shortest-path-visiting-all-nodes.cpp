class Solution {
    int solve(vector<vector<int>>&graph){
        int n = graph.size();
        int all = (1 << n) - 1;
        queue<pair<int, pair<int, int>>> que;
        set<pair<int, int>> vis;
        for(int i = 0; i < n; i++){
            int mask = (1 << i);
            que.push({i, {0, mask}});
            vis.insert({i, mask});
        }
        while(!que.empty()){
            auto node = que.front();
            que.pop();
            int val = node.first, dist = node.second.first,mask = node.second.second;
            for(auto tem: graph[val]){
                int newMask = (mask | (1 << tem));
                if(newMask == all){
                    return dist+1;
                }else if(vis.count({tem, newMask})){
                    continue;
                }
                vis.insert({tem, newMask});
                que.push({tem, {dist+1, newMask}});
            } 
        }
        return 0;
    }
public:
    int shortestPathLength(vector<vector<int>>& graph) {
       if(graph.size() == 1) return 0;
       return solve(graph);
    }
};