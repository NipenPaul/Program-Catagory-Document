class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        vector<int> v;
        int mod = 1e9+7;
        bool ok = false;
        int cnt = 0;
        int ct = 0;
        for(int i = 0; i < nums.size(); i++){
            if(ok && nums[i] == 1){
                cnt++;
                v.push_back(cnt);
                cnt = 0;
            }
            if(nums[i] == 0){
                cnt++;
            }
            if(nums[i] == 1){
                ct++;
                cnt = 0;
                ok = true;
            }
        }
        if(ct == 0){
            return 0;
        }else if(ct == 1){
            return 1;
        }
        long long ans = v[0];
        //cout << v[0] << " ";
        for(int i = 1; i < v.size(); i++){
           // cout << v[i] << endl;
            ans = (ans * v[i]) % mod;
        }
        return ans;
    }
};
