class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& mul) {
        int n = nums.size();
        int m = mul.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1,-1));
      return rec(0,0,nums, mul, dp, n);  
    }
    int rec(int l, int pos, vector<int>& nums, vector<int>& mul, vector<vector<int>>&dp, int n){
        if(pos == mul.size()){
            return 0;
        }
       if(dp[l][pos] != -1) return dp[l][pos];
       int ans1 = mul[pos]*nums[l] + rec(l+1, pos+1, nums,mul, dp, n);
       int ans2 = mul[pos]*nums[(n-1)-(pos-l)] + rec(l, pos+1, nums,mul, dp, n);
       return dp[l][pos] = max(ans1, ans2);
    }
};
