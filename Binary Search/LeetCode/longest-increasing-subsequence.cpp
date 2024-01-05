class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> vec;
        vec.push_back(nums[0]);
        for(int &x: nums){
            if(vec.back() < x){
                vec.push_back(x);
            }else{
                auto it = lower_bound(vec.begin(), vec.end(), x);
                vec[it - vec.begin()] = x;
            }
        }
        return vec.size();
    }
};
