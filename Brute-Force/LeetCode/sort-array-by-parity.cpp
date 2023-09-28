class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      vector<int> even, odd;
      for(int &x: nums){
          if(x & 1) odd.emplace_back(x);
          else even.emplace_back(x);
      }
      for(int &x: odd){
          even.emplace_back(x);
      }
      return even;
    }
};