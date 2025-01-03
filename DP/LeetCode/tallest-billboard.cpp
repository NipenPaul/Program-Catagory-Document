class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
        int sum = 0;
        for(int &x: rods){
            sum += x;
        }
        vector<int> dp(sum+1, -1);
        dp[0] = 0;
        for(int &rod: rods){
            vector<int>dpCopy(sum+1);
            dpCopy = dp;
            for(int i = 0; i <= sum-rod; i++){
                if(dpCopy[i] < 0) continue;
                dp[i+rod] = max(dp[i+rod], dpCopy[i]);
                dp[abs(i-rod)] = max(dp[abs(i-rod)], dpCopy[i]+min(i, rod));
            }
        }
        return dp[0];
    }
};
