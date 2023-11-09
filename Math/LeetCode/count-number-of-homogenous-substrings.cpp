class Solution {
public:
    int countHomogenous(string s) {
        long long ans = 0;
        int mod = 1e9+7;
        long long cnt = 1;
        for(int i = 0; i < s.size()-1; i++){
            if(s[i] != s[i+1]){
                ans = ans + (cnt * (cnt+1) / 2);
                ans %= mod;
                cnt = 1;
            }else{
                cnt++;
            }
        }
        ans = ans + (cnt * (cnt+1) / 2);
        ans %= mod;
        return ans;
    }
};