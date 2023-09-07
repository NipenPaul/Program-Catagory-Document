class Solution {
public:
    int backtrack(vector<int>&nums, int mask, int pairPick, vector<int>&dp){
        if(2*pairPick == nums.size()) return 0;
        if(dp[mask] != -1) return dp[mask];
        int mx = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(((mask >> i) & 1) == 1 || ((mask >> j) & 1)){
                    continue;
                }
                int newMask = mask | (1 << i) | (1 << j);
                int currScore = (pairPick+1)*gcd(nums[i], nums[j]);
                int remainScore = backtrack(nums, newMask, pairPick+1, dp);
                mx = max(mx, currScore+remainScore); 
            }
        }
        return dp[mask] = mx;
    }
    int maxScore(vector<int>& nums) {
        int dpSize = 1 << nums.size();
        vector<int> dp(dpSize, -1);
        return backtrack(nums, 0, 0, dp);
    }
};
