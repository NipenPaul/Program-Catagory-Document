class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long mx = 0;
        long long sum = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            if(i-1 >= 0 && nums[i]+sum >= nums[i-1]){
                sum += nums[i];
            }else{
                sum += nums[i];
                mx = max(sum, mx);
                sum = 0;
            }
        }
        return mx;
    }
};
