class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int ans = 0;
        int n = nums.size();
        int m = nums[0].size();
        for(int i = 0; i < n; i++){
            sort(nums[i].begin(), nums[i].end(), greater<int>());
        }
        for(int i = 0; i < m; i++){
            int mx = 0;
            for(int j = 0; j < n; j++){
                //cout << nums[j][i] << " ";
                mx = max(nums[j][i], mx);
            }
            //cout << endl;
            ans += mx;
        }
        return ans;
    }
};
