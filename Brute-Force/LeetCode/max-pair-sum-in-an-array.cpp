class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans = -1;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(f(nums[i]) == f(nums[j])){
                    ans = max(nums[i]+nums[j], ans);
                }
            }
        }
        return ans;
    }
    int f(int n){
        int mx = 0;
        while(n != 0){
            int d = n % 10;
            mx = max(mx, d);
            n /= 10;
        }
        return mx;
    }
};
