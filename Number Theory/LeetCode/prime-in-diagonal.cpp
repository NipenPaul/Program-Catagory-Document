class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int mx = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j || i+j == n-1){
                    int sq = sqrt(nums[i][j]);
                    bool ok = true;
                    if(nums[i][j] == 1){
                        ok = false;
                    }
                    for(int k = 2; k <= sq; k++){
                        if(nums[i][j] % k == 0){
                            ok = false;
                        }
                    }
                    if(ok){
                        mx = max(mx, nums[i][j]);
                    }
                }
            }
        }
        return mx;
    }
};
