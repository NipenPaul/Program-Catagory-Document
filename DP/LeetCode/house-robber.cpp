class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, 0);
        int ans = 0;
        for(int i = 0; i < n; i++){
            dp[i] = nums[i];
            for(int j = 0; j < i-1; j++){
                dp[i] = max(dp[i], nums[i]+dp[j]);
            }
            ans = max(dp[i], ans);
        }
        return ans;
    }
};
