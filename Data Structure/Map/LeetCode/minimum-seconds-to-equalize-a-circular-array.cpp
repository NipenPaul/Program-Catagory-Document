class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        map<int, int> mp;
        int k = 1;
        vector<int> adj[100005];
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]] == 0){
                mp[nums[i]] = k;
                k++;
            }
            int ind = mp[nums[i]];
            adj[ind].push_back(i);
        }
        int n = nums.size();
        int ans = INT_MAX;
        for(int i = 1; i <= k; i++){
            int sz = adj[i].size();
            if(sz > 0){
                int d = adj[i][0] - 0 + ((n-1) - adj[i][sz-1]);
                for(int j = 0; j < adj[i].size()-1; j++){
                    d = max(d, adj[i][j+1]-adj[i][j]-1);
                }
                ans = min(ans, (d+1)/2);
            }
        }
        return ans;
    }
};
