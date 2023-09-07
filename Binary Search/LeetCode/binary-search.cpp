class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, target);
    }
    int binarySearch(vector<int>&nums, int x){
        int low = 0, high = nums.size()-1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == x){
                return mid;
            }else if(nums[mid] > x){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return -1;
    }
};
