class Solution {
public:
    int mod = (int)1e9+7;
    int numberOfArrays(string s, int k) {
       int n = s.size();
       vector<int> dp(n+1, -1);
       return rec(0, s, k, dp); 
    }
    int rec(int pos, string &s, int k, vector<int>&dp){
        if(dp[pos] != -1){
            return dp[pos];
        }
        if(pos == s.size()){
            return 1;
        }
        if(s[pos] == '0'){
            return 0;
        }
        long long cnt = 0;
        long long num = 0;
        for(int i = pos; i < s.size(); i++){
            num = num * 10 + s[i] - '0';
            if(num > k) break;
            cnt = (cnt + rec(i+1, s, k, dp)%mod) % mod;
            cnt %= mod;
        }
        return dp[pos] = cnt;
    }
};
