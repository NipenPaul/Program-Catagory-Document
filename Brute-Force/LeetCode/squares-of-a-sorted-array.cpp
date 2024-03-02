class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> vis(10001, 0);
        for(int &x: nums){
            if(x < 0){
                vis[x * (-1)]++;
            }else{
                vis[x]++;
            }
        }
        
        vector<int> ans;
        for(int i = 0; i <= 10000; i++){
            for(int j = 0; j < vis[i]; j++){
                ans.push_back(i * i);
            }
        }

        return ans;
    }
};