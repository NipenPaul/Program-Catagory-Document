class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                set<int> se;
                for (int k = i; k <= j; k++) {
                    se.insert(nums[k]);
                }
                int len = se.size();
                ans += (len * len);
            }
        }
        return ans;
    }
};