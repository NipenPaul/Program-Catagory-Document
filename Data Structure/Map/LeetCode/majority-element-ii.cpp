class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       map<int, int> mp;
       int need = (nums.size()) / 3 + 1;
       //cout << need << endl;
       for(int &x: nums){
           mp[x]++;
       } 
       vector<int> ans;
       for(auto &[x, y]: mp){
           if(y >= need){
               ans.push_back(x);
           }
       }
       return ans;
    }
};