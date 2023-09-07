class Solution {
public:
    int minExtraChar(string s, vector<string>& d) {
        int n = s.size();
        unordered_set<string> use(d.begin(), d.end());
        unordered_map<int, int> dp;
        function<int(int)> rec = [&](int ind){
            if(ind == n) return 0;
            if(dp.count(ind)){
                return dp[ind];
            }
            int ans = rec(ind+1)+1;
            for(int i = ind; i < n; i++){
                auto curr = s.substr(ind, i-ind+1);
                if(use.count(curr)){
                    ans = min(ans, rec(i+1));
                }
            }
            return dp[ind] = ans;
        };
        return rec(0);
    }
};
