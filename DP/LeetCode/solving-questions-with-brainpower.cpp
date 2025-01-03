// Recursion Solution
class Solution {
public:
    long long mostPoints(vector<vector<int>>& que) {
        int n = que.size();
        vector<vector<long long>>dp(n+1, vector<long long>(2, -1));
        return rec(0, que, n, dp, false);
    }
    long long rec(int ind, vector<vector<int>>& que, int n, vector<vector<long long>>&dp, bool ok){
       if(ind >= n) return 0;
       if(dp[ind][ok] != -1) return dp[ind][ok];
       long long res = max(que[ind][0]+rec(ind+que[ind][1]+1, que, n, dp, true), rec(ind+1, que, n, dp, true));
       return dp[ind][ok] = res; 
    }
};

// Iterative solution
class Solution {
public:
    long long mostPoints(vector<vector<int>>& que) {
        int n = que.size();
        vector<long long> dp(n+1, 0);
        dp[n-1] = que[n-1][0];
        for(int i = n-2; i >= 0; i--){
            dp[i] = que[i][0];
            int skip = que[i][1];
            if(skip+1+i < n){
                dp[i] += dp[i+skip+1];
            }
            dp[i] = max(dp[i], dp[i+1]);
        }
        return dp[0];
    }
};
