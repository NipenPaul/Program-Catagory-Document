class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vec;
        vec.push_back(binLower(nums, target));
        vec.push_back(binUpper(nums, target));
        return vec;
    }
    int binLower(vector<int>& nums, int val){
        int low = 0, high = nums.size()-1;
        int ans = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == val){
                ans = mid;
                high = mid - 1;
            }else if(nums[mid] > val){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
    int binUpper(vector<int>& nums, int val){
        int low = 0, high = nums.size()-1;
        int ans = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == val){
                ans = mid;
                low = mid + 1;
            }else if(nums[mid] > val){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};