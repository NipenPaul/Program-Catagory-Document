class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string tems = "", temt =  "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '#' && tems.size() > 0){
                tems.pop_back();
            }else if(s[i] != '#'){
                tems += s[i];
            }
        }
        for(int i = 0; i < t.size(); i++){
            if(t[i] == '#' && temt.size() > 0){
                temt.pop_back();
            }else if(t[i] != '#'){
                temt += t[i];
            }
        }
        //cout << tems << endl;
        //cout << temt << endl;
        if(temt == tems) return true;
        return false;
    }
};