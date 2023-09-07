class Solution {
public:
    bool validPartition(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
        if(rec(0, n, nums, dp)) return true;
        return false;
    }
     int rec(int ind, int n, vector<int>&nums, vector<int>&dp){
        if(ind >= n) return 1;
        if(dp[ind] != -1) return dp[ind];
        int ans = 0;
        if(ind+1 < n){
            if(nums[ind] == nums[ind+1]){
                ans |= rec(ind+2, n, nums, dp);
            }
        }
        if(ind+2 < n){
            if(nums[ind] == nums[ind+1] && nums[ind] == nums[ind+2]){
                ans |= rec(ind+3, n, nums, dp);
            }
            if(nums[ind] == nums[ind+1]-1 && nums[ind+1] == nums[ind+2]-1){
                ans |= rec(ind+3, n, nums, dp);
            }
        }
        return dp[ind] = ans;
    };
};
