#include<bits/stdc++.h>

class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> v;
        vector<int> ma(51, 0);
        for(int i = 0; i < k; i++){
           if(nums[i] < 0){
            ma[abs(nums[i])]++;
           }
        }
        int rx = x;
        bool ok = false;
        for(int i = 50; i >= 1; i--){
            if(ma[i] < rx){
                rx -= ma[i];
            }else{
                ok = true;
                v.push_back(-i);
                break;
            }
        }
        if(!ok) v.push_back(0);
        for(int i = k; i < nums.size(); i++){
            if(nums[i] < 0){
                ma[abs(nums[i])]++;
            }
            if(nums[i-k] < 0){
               ma[abs(nums[i-k])]--; 
            }
            rx = x;
            bool ok = false;
            for(int j = 50; j > 0; j--){
                if(ma[j] < rx){
                    rx -= ma[j];
                }else{
                    ok = true;
                    v.push_back(-j);
                    break;
                }
             }
            if(!ok) v.push_back(0);
        }
        return v;
    }
};
