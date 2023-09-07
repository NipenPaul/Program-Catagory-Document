class Solution {
public:
    string removeStars(string s) {
        string tem = "";
        int cnt = 0;
        reverse(s.begin(), s.end());
        for(char &c: s){
            if(c == '*') cnt++;
            else if(cnt > 0){
                cnt--;
            }else{
                tem += c;
            }
        }
        reverse(tem.begin(), tem.end());
        return tem;
    }
};
