class Solution {
public:
    int mod;
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1, -1);
        mod = (int)1e9+7;
        int ans = 0;
        for(int now = low; now <= high; now++){
            ans += rec(now, zero, one, dp);
            ans %= mod;
        }
        return ans;
    }
    int rec(int now, int zero, int one, vector<int>&dp){
        if(now == 0)  return 1;
        if(dp[now] != -1) return dp[now];
        int cnt = 0;
        if(now >= zero){
            cnt += rec(now-zero, zero, one, dp);
            cnt %= mod;
        }
        if(now >= one){
            cnt += rec(now-one, zero, one, dp);
            cnt %= mod;
        }
        return dp[now] = cnt;
    }
};
