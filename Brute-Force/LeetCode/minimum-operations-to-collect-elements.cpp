class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        vector<int> vis(k+1, 0);
        int n = nums.size();
        int cnt = 0;
        for(int i = n-1; i >= 0; i--){
            if(nums[i] <= k){
                vis[nums[i]] = 1;
            }
            cnt++;
            int ct = 0;
            for(int j = 1; j <= k; j++){
                if(vis[j] == 1){
                    ct++;
                }
            }
            if(ct == k){
                return cnt;
            }
        }
        return 0;
    }
};