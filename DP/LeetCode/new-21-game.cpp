class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        vector<double> dp(n+1);
        dp[0] = 1;
        double s = k > 0 ? 1: 0;
        for(int i = 1; i <= n; i++){
           dp[i] = s / maxPts;
           if(i < k){
               s += dp[i];
           }
           if(i-maxPts >= 0 && i-maxPts < k){
               s -= dp[i-maxPts];
           }
        }
        double ans = 0;
        for(int i = k; i <= n; i++){
            ans += dp[i];
           // cout << i << ": ";
           // cout << dp[i] << endl;
        }
        return ans;
    }
};


/**class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        vector<double> dp(n+1);
        dp[0] = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= maxPts; j++){
                if(i-j >= 0 && i-j < k){
                    //cout << i << " " << j << ": ";
                   // cout << dp[i] << " " << dp[i-j] << " " << dp[i-j]/maxPts << endl;
                    dp[i] += dp[i-j]/maxPts;
                }
            }
        }
        double ans = 0;
        for(int i = k; i <= n; i++){
            ans += dp[i];
           // cout << i << ": ";
           // cout << dp[i] << endl;
        }
        return ans;
    }
};
**/
