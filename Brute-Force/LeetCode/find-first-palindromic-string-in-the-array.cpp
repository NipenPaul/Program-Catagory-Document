class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string &s: words){
            if(isPalindrome(s)){
                return s;
            }
        }
        return "";
    }
    bool isPalindrome(string s){
        int n = s.size();
        int i = 0, j = n - 1;
        while(i < j){
            if(s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};