class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        for(int i = 1; i <= n; i++){
            if(n % i == 0){
                long long a = nums[i-1];
                ans += (a*a);
            }
        }
        return ans;
    }
};
