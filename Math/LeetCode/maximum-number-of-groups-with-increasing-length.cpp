class Solution {
public:
    int maxIncreasingGroups(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long sum = 0, cnt = 0;
        for(int &x: nums){
            sum += x;
            if(sum >= ((cnt+1)*(cnt+2)) / 2){
                cnt += 1;
            }
        }
        return cnt;
    }
};
