class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int &x: nums){
            mp[x]++;
        }
        vector<pair<int, int>> vec;
        vector<int> v;
        for(auto &[x, y]: mp){
            vec.push_back({y, x});
        }
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());
        for(int i = 0; i < k; i++){
            v.push_back(vec[i].second);
        }
        return v;
    }
};
