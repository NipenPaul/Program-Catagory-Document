class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
       int n = nums.size();
        vector<int> cnt(32, 0);

        for (int num : nums) {
            for (int i = 0; i < 32; i++) {
                if (num & (1 << i)) {
                    cnt[i]++;
                }
            }
        }

        int kOr = 0;
        for (int i = 0; i < 32; i++) {
            if (cnt[i] >= k) {
                kOr |= (1 << i);
            }
        }

        return kOr; 
        }
};