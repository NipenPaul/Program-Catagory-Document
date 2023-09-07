class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        const int INF = 1e9;
        vector<int> dp(n+1, INF);
        dp[0] = 0;;
        for(int i = 0; i <= n; i++){
            int st = max(0, i-ranges[i]);
            int en = min(n, i+ranges[i]);
           // cout << st << " " << en << endl;
            for(int j = st; j <= en; j++){
                //cout << dp[en] << " " << dp[j] << endl;
                dp[en] = min(dp[en], dp[j]+1);
            }
        }
        if(dp[n] == INF) return -1;
        return dp[n];
    }
};
