// iterative O(n^2)
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

// recursion O(n)
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
        return max(rec(dp, n, 0, nums), rec(dp, n, 1, nums));
    }
    int rec(vector<int>&dp, int n, int ind,vector<int>&nums){
        if(n <= ind) return -(int)2e9;
        if(dp[ind] != -1) return dp[ind];
        int res = nums[ind];
        res = max(res, nums[ind]+rec(dp, n, ind+2, nums));
        res = max(res, nums[ind]+rec(dp, n, ind+3, nums));
        dp[ind] = res;
        return dp[ind];
    }
};
