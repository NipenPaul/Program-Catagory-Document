class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end());
        long long ans = 0;
        vector<int> vis(n+5, 0);
        for(int i = 0; i < n; i++){
            if(vis[v[i].second] == 0){
                ans += v[i].first;
                vis[v[i].second] = 1;
                int d = v[i].second;
                if(d-1 >= 0){
                    vis[d-1] = 1;
                }
                if(d+1 < n){
                    vis[d+1] = 1;
                }
            }
        }
        return ans;
    }
};
