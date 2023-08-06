class Solution {
public:
    string finalString(string s) {
        string tem = "";
        for(char &c: s){
            if(c == 'i'){
                reverse(tem.begin(), tem.end());
            }else{
                tem += c;
            }
        }
        return tem;
    }
};
