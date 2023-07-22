class Solution {
public:
    long long maxScore(vector<int>& nums, int x) {
        int n = nums.size();
        vector<vector<long long>> dp(n+1, vector<long long>(2, -1));
        return rec(0, nums, x, dp, -1);
    }
    long long rec(int ind, vector<int>&nums, int x, vector<vector<long long>>&dp, int p){
        if(nums.size() <= ind) return 0;
        if(p == -1){
            return nums[ind] + rec(ind+1, nums, x, dp, nums[ind] % 2);
        }
        if(dp[ind][p] != -1) return dp[ind][p];
        
        long long ans = 0;
        if(nums[ind] % 2 == p){
            ans = max(ans, nums[ind] + rec(ind+1, nums, x, dp, p));
            ans = max(ans, rec(ind+1, nums, x, dp, p));
        }else{
           ans = max(ans, nums[ind] + rec(ind+1, nums, x, dp, p^1)-x);
           ans = max(ans, rec(ind+1, nums, x, dp, p));
        }
        return dp[ind][p] = ans;
    }
};
