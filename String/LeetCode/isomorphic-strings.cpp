class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, int> mp1, mp2;
        for(int i = 0; i < s.size(); i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        
        bool ok = true;
        for(int i = 0; i < s.size(); i++){
            if(mp1[s[i]] != mp2[t[i]]){
                ok = false;
            }
        }

        return ok && calculationFrequency(s) == calculationFrequency(t);
    }

    vector<int> calculationFrequency(string s){
        vector<int> vec;
        int cnt = 1;
        for(int i = 0; i < s.size()-1; i++){
           if(s[i] == s[i+1]){
            cnt++;
           }else{
            vec.push_back(cnt);
            cnt = 1;
           }
        }

        vec.push_back(cnt);
        return vec;
    }
};