class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        map<int, vector<int>> mp;
        int n = nums.size();
        vector<long long> v(n);
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        for(auto &it: mp){
            int sz = it.second.size();
            long long sum = 0, lsum = 0, rsum = 0;
            for(int i = 0; i < sz; i++){
                sum += it.second[i];
            }
            for(long long i = 0; i < sz; i++){
                rsum = sum-lsum-it.second[i];
                long long r = sz-i-1;
                long long ans = rsum - (it.second[i]*r);
                ans += ((it.second[i]*i)-lsum);
                lsum += it.second[i];
                v[it.second[i]] = ans;
            }
        }
        return v;
    }
};
