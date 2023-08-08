class Solution {
public:
    int search(vector<int>& nums, int target) {
       int low = 0, high = nums.size()-1;
        while(low <= high){
            int mid = (low + high) / 2;
          //  cout << "low = " << low << endl;
          //  cout << "high = " << high << endl;
          //  cout << "mid = " << mid << endl;
            if(nums[mid] == target) return mid;
            if(nums[mid] >= nums[low]){
                if(target >= nums[low] && nums[mid] >= target){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }else{
                if(nums[high] >= target && nums[mid] <= target){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};
