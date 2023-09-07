#include<bits/stdc++.h>

class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> v;
        
        map<int, int> ma;
        multiset<int> mse;
        for(int i = 0; i < k; i++){
           if(nums[i] < 0){
               mse.insert(nums[i]);
           }
        }
        if(mse.size() < x){
            v.push_back(0);
        }else{
            v.push_back(*next(mse.begin(), x-1));
        }
        for(int i = k; i < nums.size(); i++){
            if(nums[i-k] < 0){
                mse.erase(mse.find(nums[i-k]));
            }
            if(nums[i] < 0){
               mse.insert(nums[i]);
            }
            
           if(mse.size() < x){
            v.push_back(0);
            }else{
                v.push_back(*next(mse.begin(), x-1));
            }
        }
        return v;
    }
};
