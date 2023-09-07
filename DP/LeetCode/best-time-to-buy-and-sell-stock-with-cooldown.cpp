class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        vector<int> buy(n,0), sel(n,0), col(n,0);
        for(int i = 1; i < n; i++){
            buy[i] = max(col[i-1], buy[i-1]);
            sel[i] = max(buy[i-1] + (p[i] - p[i-1]), sel[i-1] + (p[i] - p[i-1]));
            col[i] = max(sel[i-1], col[i-1]);
        }
        return max({col[n-1], buy[n-1], sel[n-1]});
    }
};
