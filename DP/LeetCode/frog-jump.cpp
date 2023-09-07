class Solution {
public:
    bool canCross(vector<int>& s) {
        int n = s.size();
        vector<vector<int>>dp(n+2, vector<int>(4000, -1));
        function<bool(int, int)> rec = [&](int i, int k)->bool{
            if(i == n-1) return true;
            bool ok = false;
            if(dp[i][k] != -1) return dp[i][k];
            for(int j = i+1; j < n; j++){
                if(s[j] > (s[i]+k+1)) break;
                else if(s[j] == (s[i]+k-1)){
                    ok |= rec(j, k-1);
                }
                else if(s[j] == (s[i]+k)){
                    ok |= rec(j, k);
                }
                else if(s[j] == (s[i]+k+1)){
                    ok |= rec(j, k+1);
                }
            }
            return dp[i][k] = ok;
        };
        return rec(0, 0);
    }
};
