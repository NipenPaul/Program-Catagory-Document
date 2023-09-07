class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(370, -1);
        vector<int> cnt(370, 0);
        for(int &x: days){
            cnt[x] = 1;
        }
        return rec(1, dp, cnt, costs); 
    }
    int rec(int i, vector<int>&dp, vector<int>&cnt, vector<int>&costs){
        if(i  > 365){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        int ans;
        if(cnt[i] > 0){
            ans = min({rec(i+1, dp, cnt, costs)+costs[0], rec(i+7, dp, cnt, costs)+costs[1], rec(i+30, dp, cnt, costs)+costs[2]});
        }else{
            ans = rec(i+1, dp, cnt, costs);
        }
        dp[i] = ans;
        return ans;
    }
};
