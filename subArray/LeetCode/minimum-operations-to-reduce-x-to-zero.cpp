class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
      int n = nums.size();
      int sum = 0;
      unordered_map<int, int> mp;
      for(int i = 0; i < n; i++){
          sum += nums[i];
          mp[sum] = i;
      }
      if(x > sum) return -1;
      mp[0] = 0;
      int mx = 0;
      sum -= x;
      int val = 0;
      for(int i = 0; i < n; i++){
          val += nums[i];
          if(mp.count(val-sum)){
              if(val-sum == 0){
                  mx = max(mx, i-mp[val-sum]+1);
              }else{
                  mx = max(mx, i-mp[val-sum]);
              }
          }
      }
      return mx == 0 ? (sum == 0 ? n:-1): n-mx;
    }
};