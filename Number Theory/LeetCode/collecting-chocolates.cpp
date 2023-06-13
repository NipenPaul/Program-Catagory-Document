class Solution {
public:
    long long minCost(vector<int>& nums, int x) {
        long long ans = 0;
        int n = nums.size();
        vector<long long> mn(n, 1e9);
        for(int i = 0; i < n; i++){
            mn[i] = nums[i];
            ans += mn[i];
        }
        for(long long i = 1; i < n; i++){
            long long cost = i * (long long)x;
            for(long long j = 0; j < n; j++){
                long long d = nums[(j+i) % n];
                mn[j] = min(mn[j], d);
                cost += mn[j];
            }
            ans = min(ans, cost);
        }
        return ans;
    }
};
