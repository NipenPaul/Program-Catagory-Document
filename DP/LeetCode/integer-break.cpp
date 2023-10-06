class Solution {
public:
    int integerBreak(int n) {
      if(n <= 3) return n-1;
      vector<int>dp(n+1, 0);
      return rec(n, dp);  
    }
    int rec(int num, vector<int>&dp){
        if(num <= 3){
            return num;
        }
        if(dp[num] != 0){
            return dp[num];
        }
        int ans = num;
        for(int i = 2; i < num; i++){
            ans = max(ans, i * rec(num-i, dp));
        }
        return dp[num] = ans;
    }
};