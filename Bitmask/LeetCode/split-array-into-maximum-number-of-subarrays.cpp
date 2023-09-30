class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int sum = nums[0];
        for(int &x: nums){
            sum &= x;
        }
        if(sum) return 1;
        int mx = (1 << 20)-1;
        int cal = mx;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            cal &= nums[i];
            if(cal == 0){
                cnt++;
                cal = mx;
            }
        }
        return cnt;
    }
};