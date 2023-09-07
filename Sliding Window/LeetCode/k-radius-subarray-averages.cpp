class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int kk) {
        int n = nums.size();
        long long k = kk;
        vector<long long> cum(n+2, 0);
        vector<int> ans(n, -1);
        for(int i = 1; i <= n; i++){
            cum[i] = cum[i-1] + (long long)nums[i-1];
        }
        for(int i = k; i < n-k; i++){
            ans[i] = (cum[i+k+1] - cum[i-k]) / (2*k+1);
        }
        return ans;
    }
};
