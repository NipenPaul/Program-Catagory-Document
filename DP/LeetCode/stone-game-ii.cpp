class Solution {
public:
    int stoneGameII(vector<int>& piles) {
       int n = piles.size();
       vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(n+1, vector<int>(2, -1)));
       function<int(int, int, int)>rec = [&](int p, int i, int m)->int{
           if(i == n) return 0;
           if(dp[i][m][p] != -1){
               return dp[i][m][p];
           }
           int res = p == 1 ? 1e7: -1, s = 0;
           for(int x = 1; x <= min(2*m, n-i); x++){
               s +=  piles[i+x-1];
               if(p == 0){
                   res = max(res, s+rec(1, i+x, max(m, x)));
               }else{
                   res = min(res, rec(0, i+x, max(m, x)));
               }
           }
           return dp[i][m][p] = res;
       };
       return rec(0, 0, 1); 
    }
};
