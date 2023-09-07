class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0, ct = 0;
        for(int i = 0; i < s.size(); i++){
            if(i < k){
                ct += isVowel(s[i]);
            }else{
                ans = max(ct, ans);
                ct -= isVowel(s[i-k]);
                ct += isVowel(s[i]);
            }
        }
        ans = max(ct, ans);
        return ans;
    }
    bool isVowel(char &c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};
