class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> vec(n);
        for(int i = 0; i < n; i++){
            int x = nums[i];
            while(x != 0){
                vec[i].push_back(x % 10);
                x /= 10;
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(gcd(vec[j][0], vec[i][vec[i].size()-1]) == 1){
                    ans++;
                }
            }
        }
     return ans;
    }
};
