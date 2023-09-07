class Solution {
public:
    vector<vector<long long>> dp;
    long long mod = 1e9+7;
    int numOfWays(vector<int>& nums) {
        int m = nums.size();
        dp.resize(m+1);
        // pascal ...nCr ... dp
        for(int i = 0; i < m+1; i++){
            dp[i] = vector<long long>(i+1, 1);
            for(int j = 1; j < i; j++){
                dp[i][j] = (dp[i-1][j-1]+dp[i-1][j]) % mod;
            }
        }
        return (dfs(nums)-1) % mod;
    }
    long long dfs(vector<int>&nums){
        int m = nums.size();
        if(m < 3) return 1;
        vector<int> left, right;
        for(int i = 1; i < m; i++){
            if(nums[i] < nums[0]){
                left.push_back(nums[i]);
            }else{
                right.push_back(nums[i]);
            }
        }
        long long lw = dfs(left) % mod;
        long long rw = dfs(right) % mod;
        return (((lw*rw)%mod)*dp[m-1][left.size()]) % mod;
    }
};
