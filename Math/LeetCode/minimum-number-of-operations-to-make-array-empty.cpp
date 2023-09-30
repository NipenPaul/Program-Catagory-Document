class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> cnt(1000001, 0);
        set<int> se;
        for(int &x: nums){
            cnt[x]++;
            se.insert(x);
        }
        int ans = 0;
        for(int i: se){
            if(cnt[i] == 1) return -1;
            ans += (cnt[i]+2) / 3;
        }
        return ans;
    }
};