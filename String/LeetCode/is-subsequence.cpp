class Solution {
public:
    bool isSubsequence(string s, string t) {
       int k = 0;
       for(int j = 0; j < t.size(); j++){
           if(k < s.size() && t[j] == s[k]){
               k++;
           }
       }
       if(k == s.size()) return true;
       return false;
    }
};