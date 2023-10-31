class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> v;
        v.push_back(pref[0]);
        for(int i = 1; i < n; i++){
            v.push_back(pref[i] ^ pref[i-1]);
        }
        return v;
    }
};