class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
        for(int &x: nums){
            mp[x]++;
        }

        int n = nums.size();
        n /= 2;
        for(auto [x, y]: mp){
            if(y > n){
                return x;
            }
        }

        return 0;
    }
};