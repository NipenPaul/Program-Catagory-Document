class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
    void mergeSort(vector<int>&nums, int l, int r){
        if(l < r){
            int m = (l+r)/2;
            mergeSort(nums, l, m);
            mergeSort(nums, m+1, r);
            merge(nums,l, m, r);
        }
    }
    void merge(vector<int>&nums, int l, int m, int r){
        vector<int> numsL, numsR, tem;
        for(int i = l; i <= m; i++){
            numsL.push_back(nums[i]);
        }
        for(int i = m+1; i <= r; i++){
            numsR.push_back(nums[i]);
        }
        int i = 0, j = 0;
        while(numsL.size() > i && numsR.size() > j){
            if(numsL[i] < numsR[j]){
                tem.push_back(numsL[i]);
                i++;
            }else{
                tem.push_back(numsR[j]);
                j++;
            }
        }
        while(numsL.size() > i){
            tem.push_back(numsL[i]);
            i++; 
        }
        while(numsR.size() > j){
            tem.push_back(numsR[j]);
            j++; 
        }
        for(int &x: tem){
            nums[l++] = x;
        }
    }
};
