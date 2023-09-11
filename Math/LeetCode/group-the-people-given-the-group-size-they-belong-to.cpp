class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size();
        vector<int> adj[n+1];
        for(int i = 0; i < n; i++){
            adj[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(int i = 1; i <= n; i++){
            vector<int> v;
            for(int &x: adj[i]){
                v.push_back(x);
                if(v.size() == i){
                    ans.push_back(v);
                    v.clear();
                }
            }
        }
        return ans;
    }
};