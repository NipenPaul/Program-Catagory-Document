class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int lenS = s.size();
        int lenT = t.size();
        int i = 0;
        for(int j = 0; j < lenT; j++){
            if(i < lenS && s[i] == t[j]){
                i++;
                continue;
            }
            return t[j];
        }
        return t[lenT-1];
    }
};