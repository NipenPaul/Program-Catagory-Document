class Solution {
public:
    int partitionString(string s) {
        int ans = 1;
        unordered_map<char, int> mp;
        for(char &c: s){
            if(mp[c] == 1){
                ans++;
                mp.clear();
            }
            mp[c]++;
        }
        return ans;
    }
};
