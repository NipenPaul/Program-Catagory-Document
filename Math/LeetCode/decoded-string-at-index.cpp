class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long sz = 0;
        int n = s.size();
        for(char &c: s){
            if(c >= '0' && c <= '9'){
                sz = sz * (c-'0');
            }else{
                sz++;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(s[i] >= '0' && s[i] <= '9'){
                sz = sz / (s[i]-'0');
                 k %= sz;
            }else{
                if(k == 0 || k == sz && (s[i] >= 'a' && s[i] <= 'z')){
                string ans = "";
                ans += s[i];
                return ans;
            }
                sz--;
            }
        }
        return NULL;
    }
};