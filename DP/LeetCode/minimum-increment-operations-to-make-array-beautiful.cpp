class Solution {
public:
    long long minIncrementOperations(vector<int>& nums, int k) {
      int n = nums.size();
      vector<long long> dp(n+1, -1);
      return rec(0, nums, k, dp);
    }
    long long rec(int ind, vector<int>&nums, int k, vector<long long>&dp){
        int n = nums.size();
        if(ind > n-3) return 0;
        if(dp[ind] != -1) return dp[ind];
        return dp[ind] = min({max(0,k-nums[ind])+rec(ind+1, nums, k, dp), max(0,k-nums[ind+1])+rec(ind+2, nums, k, dp), max(0,k-nums[ind+2])+rec(ind+3, nums, k, dp)});
    }
};