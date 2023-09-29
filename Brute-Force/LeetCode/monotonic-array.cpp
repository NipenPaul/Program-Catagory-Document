class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool ok = true;
        for(int i = 0; i < n-1; i++){
            if(nums[i] > nums[i+1]){
                ok = false;
                break;
            }
        }
        if(ok) return true;
        ok = true;
        for(int i = 0; i < n-1; i++){
            if(nums[i] < nums[i+1]){
                ok = false;
                break;
            }
        }
        if(ok) return true;
        return false;
    }
};