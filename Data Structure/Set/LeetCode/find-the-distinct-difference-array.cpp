class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            set<int> se1, se2;
            for(int j = 0; j <= i; j++){
                se1.insert(nums[j]);
            }
            for(int j = i+1; j < n; j++){
                se2.insert(nums[j]);
            }
            v.push_back(se1.size() - se2.size());
        }
        return v;
    }
};
