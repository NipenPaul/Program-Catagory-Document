class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans = 0;
        for(string &s: details){
            int a = s[11]-'0';
            a = a*10+(s[12]-'0');
            if(a > 60){
                ans++;
            }
        }
        return ans;
    }
};
