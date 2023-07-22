class Solution {
public:
    string sortVowels(string s) {
        vector<char> v;
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])){
                v.push_back(s[i]);
            }
        }
        if(v.size() > 0){
            sort(v.begin(), v.end());
        }
        string ans = "";
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(isVowel(s[i])){
                ans += v[j];
                j++;
            }else{
                ans += s[i];
            }
        }
        return ans;
    }
    bool isVowel(char c){
        if(c == 'a' || c == 'e'  || c == 'i' || c == 'o' || c == 'u')
            return true;
        if(c == 'A' || c == 'E'  || c == 'I' || c == 'O' || c == 'U')
            return true;
        return false;
    }
};
