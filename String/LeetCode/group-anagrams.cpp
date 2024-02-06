class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<int>> cnt(strs.size(), vector<int>(26, 0));
        for(int i = 0; i < strs.size(); i++){
            for(int j = 0; j < strs[i].size(); j++){
                int val = strs[i][j] - 'a';
                cnt[i][val]++;
            }
        }

        map<vector<int>, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++){
            mp[cnt[i]].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for(auto [vec, m]: mp){
            vector<string> v;
            for(auto str: m){
                v.push_back(str);
            }
            ans.push_back(v);
        }

        return ans;
    }
};