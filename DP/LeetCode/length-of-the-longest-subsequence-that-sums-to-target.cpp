class Solution {
public:
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<int> dp(target+1, -1);
        dp[0] = 0;
        for(int &x: nums){
            for(int sum = target; sum >= x; sum--){
                if(dp[sum-x] != -1){
                    dp[sum] = max(dp[sum], dp[sum-x]+1);
                }
            }
        }
        return dp[target];
    }
};