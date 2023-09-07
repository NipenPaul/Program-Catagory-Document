// Approach 1: Recursive Dynamic Programming
class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return rec(0, 0, nums1, nums2, dp);
    }
    int rec(int i, int j, vector<int>&nums1, vector<int>&nums2, vector<vector<int>>&dp){
        if(i >= nums1.size() || j >= nums2.size()){
            return 0;
        }
        if(dp[i][j] != -1) return dp[i][j];
        if(nums1[i] == nums2[j]){
            return dp[i][j] = 1+rec(i+1, j+1, nums1, nums2, dp);
        }
        return dp[i][j] = max(rec(i, j+1, nums1, nums2, dp), rec(i+1, j, nums1, nums2, dp));
    }
};

//Approach 2: Iterative Dynamic Programming
class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(nums1[i-1] == nums2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};
