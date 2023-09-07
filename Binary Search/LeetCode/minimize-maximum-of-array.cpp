class Solution {
public:
    int minimizeArrayValue(vector<int>& num) {
        vector<long long> nums;
        for(int &x: num){
            nums.push_back(x);
        }
        long long low = 0, high = *max_element(nums.begin(), nums.end());
        long long ans = high;
        while(low <= high){
            int mid = (low + high) / 2;
            if(check(nums, mid)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
    bool check(vector<long long> nums, long long x){
        int n = nums.size();
        long long sum = 0;
        for(long long &x: nums) sum += x;
        for(int i = 0; i < n-1; i++){
            if(x < nums[i]){
                return false;
            }
            sum -= nums[i];
            long long d = x - nums[i];
            long long mn = min(d, sum);
            nums[i] += mn;
            sum -= mn;
            nums[i+1] -= mn;
        }
        if(nums[n-1] > x || sum > x) return false;
        return true;
    }
};
