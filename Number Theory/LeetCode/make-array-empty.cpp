class Solution {
public:
    long long countOperationsToEmptyArray(vector<int>& nums) {
       vector<pair<int, int>> v;
       int n = nums.size();
       for(int i = 0; i < n; i++){
           v.push_back({nums[i], i});
       }
       sort(v.begin(), v.end());
       long long ans = 1;
       for(int i = n-2; i >= 0; i--){
           ans += (v[i].second > v[i+1].second ? n-i:1);
       }
       return ans;
    }
};
