class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int dp[arr.size()];
        memset(dp, -1, sizeof(dp));
        
        return rec(arr, k, dp, 0);
    }

    int rec(vector<int>& arr, int k, int dp[], int ind){
        int N = arr.size();

        if(ind >= N){
            return 0;
        }

        if(dp[ind] != -1){
            return dp[ind];
        }

        int currMax = 0, ans = 0;
        int end = min(N, ind + k);
        for(int i = ind; i < end; i++){
            currMax = max(currMax, arr[i]);
            ans = max(ans, currMax * (i - ind + 1) + rec(arr, k, dp, i+1));
        }

        return dp[ind] = ans;
    }
};