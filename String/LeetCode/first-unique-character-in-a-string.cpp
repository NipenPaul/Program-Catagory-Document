class Solution {
public:
    int firstUniqChar(string s) {
        int cnt[26];
        memset(cnt, -1, sizeof(cnt));
        for(char c: s){
            cnt[c - 'a']++;
        }

        for(int i = 0; i < s.size(); i++){
            if(cnt[s[i] - 'a'] == 0){
                return i;
            }
        }

        return -1;
    }
};