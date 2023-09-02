class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        map<int, int> mp;
        int n = nums.size();
        int dis = 0;
        long long sum = 0;
        for(int i = 0; i < k; i++){
            mp[nums[i]]++;
            sum += nums[i];
            if(mp[nums[i]] == 1){
                dis++;
            }
        }
        long long ans = 0;
        if(dis >= m){
            ans = sum;
        }
        for(int i = k; i < n; i++){
            sum -= nums[i-k];
            mp[nums[i-k]]--;
            if(mp[nums[i-k]] == 0){
                dis--;
            }
            mp[nums[i]]++;
            if(mp[nums[i]] == 1){
                dis++;
            }
            sum += nums[i];
            if(dis >= m){
                ans = max(ans, sum);
            }
        }
        return ans;
    }
};
