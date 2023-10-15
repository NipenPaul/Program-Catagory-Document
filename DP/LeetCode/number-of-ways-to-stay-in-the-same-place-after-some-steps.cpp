class Solution {
public:
    vector<vector<int>> dp;
    int MOD = 1e9+7;
    int arrLen;
    int numWays(int steps, int arrLen) {
        arrLen = min(arrLen, steps);
        this->arrLen = arrLen;
        dp = vector(arrLen, vector(steps+1, -1));
        return rec(0, steps);
    }
    int rec(int curr, int remain){
        if(remain == 0){
            if(curr == 0){
                return 1;
            }
            return 0;
        }
        if(dp[curr][remain] != -1){
            return dp[curr][remain];
        }
        int ans = rec(curr, remain-1);
        if(curr > 0){
            ans = (ans + rec(curr-1, remain-1)) % MOD;
        }
        if(curr < arrLen-1){
            ans = (ans + rec(curr+1, remain-1)) % MOD;
        }
        return dp[curr][remain] = ans;
    }
};