class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        int m = cuts.size();
        cuts.insert(cuts.begin(), 0);
        cuts.push_back(n);
        vector<vector<int>>dp(m+1, vector<int>(m+1, -1));
        sort(cuts.begin(), cuts.end());
        function<int(int, int j)> rec = [&](int i, int j)->int{
            if(i > j) return 0;
            if(dp[i][j] != -1){
                return dp[i][j];
            }
            int mn = INT_MAX;
            for(int ind = i; ind <= j; ind++){
                int cost = cuts[j+1]-cuts[i-1]+rec(i, ind-1)+rec(ind+1, j);
                mn = min(mn, cost);
            }
            return dp[i][j] = mn;
        };
        return rec(1, m);
    }
};
