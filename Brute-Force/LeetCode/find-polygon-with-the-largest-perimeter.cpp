class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long prev = 0;
        long long ans = - 1;
        for(int num: nums){
            if(num < prev){
                ans = num + prev;
            }
            prev += num;
        }
        return ans;
    }
};