class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return rec(nums, 0, n-1, dp) >= 0;
    }
    int rec(vector<int>&nums, int left, int right, vector<vector<int>>&dp){
        if(dp[left][right] != -1){
            return dp[left][right];
        }
        if(left == right){
            return nums[left];
        }
        int scoreLeft = nums[left] - rec(nums, left+1, right, dp);
        int scoreRight = nums[right] - rec(nums, left, right-1, dp);
        return dp[left][right] = max(scoreLeft, scoreRight);
    }
};
