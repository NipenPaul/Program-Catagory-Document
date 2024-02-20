class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> vis(n+1, 0);
        for(int &x: nums){
            vis[x] = 1;
        }
        for(int i = 0; i <= n; i++){
            if(vis[i] == 0) return i;
        }
        return 0;
    }
};