class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int ans = 0;
        unordered_map<int, int> mp;
        dfs(nums, 0, k, mp, ans);
        return ans-1;
    }
    void dfs(vector<int>&nums, int ind, int k, unordered_map<int, int> &mp, int &ans){
        if(nums.size() == ind){ 
            ans++;
            return;
        }
        // take value, if Possible
        if(!mp[nums[ind] - k] && !mp[nums[ind] + k]){
            mp[nums[ind]]++;
            dfs(nums, ind+1, k, mp, ans);
            mp[nums[ind]]--;
        }
        // don't take value
        dfs(nums, ind+1, k, mp, ans);
    }
};
