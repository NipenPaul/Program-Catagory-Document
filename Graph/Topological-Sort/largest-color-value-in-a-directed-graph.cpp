class Solution {
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.size();
        vector<int> adj[n];
        vector<int> indegree(n);
        for(auto &edge: edges){
            adj[edge[0]].push_back(edge[1]);
            indegree[edge[1]]++;
        }
        vector<vector<int>> cnt(n, vector<int>(26, 0));
        queue<int> que;
        for(int i = 0; i < n; i++){
            if(indegree[i] == 0){
                que.push(i);
            }
        }
        int visNode = 0, ans = 0;
        while(!que.empty()){
            int u = que.front();
            que.pop();
            cnt[u][colors[u]-'a']++;
            ans = max(ans, cnt[u][colors[u]-'a']);
            visNode++;
            for(int &v: adj[u]){
                for(int i = 0; i < 26; i++){
                    cnt[v][i] = max(cnt[v][i], cnt[u][i]);
                }
                indegree[v]--;
                if(indegree[v] == 0){
                    que.push(v);
                }
            }
        }
        return visNode < n ? -1: ans;
    }
};
