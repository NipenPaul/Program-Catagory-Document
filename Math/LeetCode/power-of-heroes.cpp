class Solution {
public:
    int sumOfPower(vector<int>& nums) {
        long long mod = 1e9+7, ans = 0, pre = 0;
        sort(nums.begin(), nums.end());
        for(int &xx: nums){
            long long x = xx;
            ans = (ans + (((x * x) % mod) * x) % mod + (pre * ((x * x) % mod)) % mod) % mod;
            pre = (pre * 2 + x) % mod;
        }
        return ans;
    }
};
