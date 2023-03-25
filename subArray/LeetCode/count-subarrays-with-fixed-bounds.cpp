class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans = 0;
        int mnInd = -1, mxInd = -1, leftInd = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < minK || nums[i] > maxK){
                leftInd = i;
            }
            if(nums[i] == minK){
                mnInd = i;
            }
            if(nums[i] == maxK){
                mxInd = i;
            }
            ans += max(0, min(mnInd, mxInd) - leftInd);
        }
        return ans;
    }
};
