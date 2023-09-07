class Solution {
public:
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
       map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        string str = "";
        rec(0, str, mp, digits);
        return ans;
            
    }
    void rec(int pos, string str, map<char, string>&mp, string &digits){
      if(digits.size() == pos){
          if(str.size() > 0)
            ans.push_back(str);
      } 
      string tem = mp[digits[pos]];
      for(int i = 0; i < tem.size(); i++){
          str += tem[i];
          rec(pos+1, str, mp, digits);
          str.pop_back();
      }
    }
};
