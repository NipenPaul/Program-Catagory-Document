class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        vector<int> cnt(value, 0);
        for(int &x: nums){
            int rem = x % value;
            if(rem < 0){
                cnt[rem+value]++;
            }else{
                cnt[rem]++;
            }
        }
        for(int i = 0; i <= nums.size(); i++){
            if(cnt[i%value] > 0){
                cnt[i%value]--;
            }else{
                return i;
            }
        }
        return 0;
    }
};
