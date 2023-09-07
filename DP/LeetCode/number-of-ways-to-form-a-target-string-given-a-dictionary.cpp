class Solution {
public:
    int mod = (int)1e9+7;
    long long rec(int ts, int ws, string &target, vector<vector<long long>>&dp, vector<vector<int>>&cnt){
        if(ws == 0){
            return ts == 0 ? 1: 0;
        }
        if(dp[ts][ws] != -1){
            return dp[ts][ws];
        }
        dp[ts][ws] = rec(ts, ws-1, target, dp, cnt);
        if(ts > 0){
            dp[ts][ws] += cnt[target[ts-1]-'a'][ws-1] * rec(ts-1, ws-1, target, dp, cnt);
        }
        dp[ts][ws] %= mod;
        return dp[ts][ws];
    }
    int numWays(vector<string>& words, string target) {
      int ws = words[0].size();
      int ts = target.size();
      vector<vector<long long>>dp(ts+1, vector<long long>(ws+1, -1));
      vector<vector<int>> cnt(26, vector<int>(ws));
      for(int i = 0; i < ws; i++){
          for(string & word: words){
              cnt[word[i]-'a'][i]++;
          }
      }
      return rec(ts, ws, target, dp, cnt);  
    }
};
