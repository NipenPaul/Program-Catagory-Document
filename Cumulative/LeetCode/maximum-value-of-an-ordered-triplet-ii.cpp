class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        vector<long long> cuml(n), cumr(n);
        cuml[0] = nums[0];
        cumr[n-1] = nums[n-1];
        for(int i = 1; i < n; i++){
            cuml[i] = max(cuml[i-1], (long long)nums[i]);
        }
        for(int i = n-2; i >= 0; i--){
            cumr[i]= max(cumr[i+1], (long long)nums[i]);
        }
        for(int i = 1; i < n-1; i++){
            long long cal = (long long) (cuml[i-1] -(long long)nums[i]) * cumr[i+1];
            ans = max(cal, ans);
        }
        return ans;
    }
};