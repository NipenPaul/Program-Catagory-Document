class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char se) {
        vector<string> v;
        for(string &s: words){
            string tem = "";
            for(char &c: s){
                if(c == se){
                    if(tem.size() > 0){
                        v.push_back(tem);
                    }
                    tem = "";
                }else{
                    tem += c;
                }
            }
            if(tem.size() > 0){
                v.push_back(tem);
            }
        }
        return v;
    }
};
