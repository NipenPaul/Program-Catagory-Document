class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0, zero = 0;
        for(int &num: nums){
            if(num == 0){
                zero = 1;
            }else if(num < 0){
                neg++;
            }
        }
        if(zero) return 0;
        if(neg % 2) return -1;
        return 1;
    }
};
