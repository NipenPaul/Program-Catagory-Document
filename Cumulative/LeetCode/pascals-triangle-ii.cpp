class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> dp;
        vector<int> v;
        v.push_back(1);
        dp.push_back(v);
        v.push_back(1);
        dp.push_back(v);
        for(int i = 2; i <= rowIndex; i++){
            v.clear();
            v.push_back(1);
            for(int j = 1; j < dp[i-1].size(); j++){
                v.push_back(dp[i-1][j]+dp[i-1][j-1]);
            }
            v.push_back(1);
            dp.push_back(v);
        }
        return dp[rowIndex];
    }
};