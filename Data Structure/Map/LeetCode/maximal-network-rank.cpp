class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> adj[n];
        map<pair<int, int>, int> mp;
        for(auto &it: roads){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            mp[{it[0],it[1]}] = 1;
            mp[{it[1], it[0]}] = 1;
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int cal = adj[i].size() + adj[j].size();
                if(mp[{i, j}] == 1 || mp[{j, i}] == 1){
                    cal -= 1;
                }
                ans = max(ans, cal);
            }
        }
        return ans;
    }
};
