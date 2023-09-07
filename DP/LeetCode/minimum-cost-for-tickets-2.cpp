class Solution {
public:
    int durations[3];
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        durations[0] = 1;
        durations[1] = 7;
        durations[2] = 30;
        int n = days.size();
        vector<int> dp(n, -1);
        return rec(0, n, dp, days, costs); 
    }
    int rec(int i, int n, vector<int>&dp, vector<int>&days, vector<int>&costs){
        if(i  >= n){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        int ans = INT_MAX;
        int j = i;
        for(int k = 0; k < 3; k++){
            while(j < n && days[j] < days[i]+durations[k]){
                j++;
            }
            ans = min(ans, rec(j, n, dp, days, costs)+costs[k]);
        }
        dp[i] = ans;
        return ans;
    }
};
