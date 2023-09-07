class Solution {
public:
    int minLength(string s) {
        int len = s.size();
        for(int i = 0; i < 2*len; i++){
            string s1 = "";
            for(int j = 0; j < (int) s.size(); j++){
                if(j+1 < s.size() && s[j] == 'A' && s[j+1] == 'B'){
                    j++;
                }
                else if(j+1 < s.size() && s[j] == 'C' && s[j+1] == 'D'){
                    j++;
                }else{
                    s1 += s[j];
                }
            }
            s = s1;
            if(s.size() == 1 || s.size() == 0) break;
        }
        return  (int)s.size();
    }
};
