class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        if(isSortedA(nums)) return 0;
        int n = nums.size();
        for(int i = 1; i <= nums.size(); i++){
            int tem = nums[0];
            nums[0] = nums[n-1];
            for(int j = 1; j < n; j++){
               int tem2 = nums[j];
               nums[j] = tem;
               tem = tem2;
            }
            if(isSortedA(nums)) return i;
        }
        return -1;
    }
    
    bool isSortedA(vector<int>&nums){
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] > nums[i]) return false;
        }
        return true;
    }
};