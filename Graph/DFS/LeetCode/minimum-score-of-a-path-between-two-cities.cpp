vector<vector<pair<int, int>>> v;
vector<bool> vis;
map<int, int> ma;
int ans;

class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vis.clear();
        v.clear();
        v.resize(n+2);
        vis.resize(n+2);
        ma.clear();
        ans = 1e4+5;
        
        for(auto &x: roads){
            v[x[0]].push_back({x[1], x[2]});
            v[x[1]].push_back({x[0], x[2]});
        }
        dfs(1);
        for(auto &x: roads){
            if(ma[x[0]] || ma[x[1]]){
                ans = min(ans, x[2]);
            }
        }
        return ans;
    }
    void dfs(int src){
        vis[src] = true;
        for(auto x: v[src]){
            if(!vis[x.first]){
               ma[src] = 1;
               ma[x.first] = 1;
               dfs(x.first);
            }
        }
    }
};
