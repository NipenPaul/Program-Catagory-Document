class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(4, -1));
        return rec(0, 1, n, dp, nums);
    }
    int rec(int ind, int g, int n, vector<vector<int>>&dp, vector<int>&nums){
        if(ind >= n) return 0;
        if(g > 3) return n+1;
        if(dp[ind][g] != -1) return dp[ind][g];
        
        int cal = n+1;
        if(nums[ind] == g){
            cal = min(cal, rec(ind+1, g, n, dp, nums));
        }else{
            if(nums[ind] > g){
                cal = min(cal, rec(ind+1, nums[ind], n, dp, nums));
            }
            cal = min(cal, 1+rec(ind+1, g, n, dp, nums)); 
            cal = min(cal, 1+rec(ind+1, g+1, n, dp, nums));
            cal = min(cal, 1+rec(ind+1, g+2, n, dp, nums));
        }
        return dp[ind][g] = cal;
    }
};
