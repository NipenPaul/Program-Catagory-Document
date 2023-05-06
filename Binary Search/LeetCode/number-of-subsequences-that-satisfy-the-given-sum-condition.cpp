class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int ans = 0, n = nums.size(), mod = 1e9+7;
        int power[n];
        power[0] = 1;
        for(int i = 1; i < n; i++){
            power[i] = (power[i-1] * 2) % mod;
        }
        sort(nums.begin(), nums.end());
        for(int left = 0; left < n; left++){
            int right = binarySearch(nums, target-nums[left]);
            if(right >= left){
                ans = (ans + power[right-left]) % mod;
            }
        }
        return ans;
    }
    int binarySearch(vector<int>&nums, int x){
        int low = 0, high = nums.size()-1, ans = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] <= x){
                ans = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }
};
