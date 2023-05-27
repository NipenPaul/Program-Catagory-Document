class Solution {
public:
    string stoneGameIII(vector<int>& stoneValue) {
        int n = stoneValue.size();
        int ok = 1e9;
        vector<int> dp(n+1, ok);
        function<int(int)> rec = [&](int i) ->int{
            if(i == n){
                return 0;
            }
            if(dp[i] != ok){
                return dp[i];
            }
            dp[i] = stoneValue[i] - rec(i+1);
            if(i+2 <= n){
                dp[i] = max(dp[i], stoneValue[i]+stoneValue[i+1]-rec(i+2));
            }
            if(i+3 <= n){
                dp[i] = max(dp[i], stoneValue[i]+stoneValue[i+1]+stoneValue[i+2]-rec(i+3));
            }
            return dp[i];
        };
        int dif = rec(0);
        if(dif > 0) return "Alice";
        if(dif < 0) return "Bob";
        return "Tie";
    }
};
