class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
       function<long long(int)> getCost = [&](int x)->long long{
           long long result = 0;
           for(int i = 0; i < nums.size(); i++){
               result += 1L * abs(nums[i] - x) * cost[i];
           }
           return result;
       };
       long long answer = 2e18;
       int left = 1, right = 1e6;
       while(left < right){
           int mid = (left+right)/2;
           long long costLeft = getCost(mid);
           long long costRight = getCost(mid+1);
           answer = min(costLeft, costRight);
           if(costLeft > costRight){
               left = mid + 1;
           }else{
               right = mid;
           }
       }
       return answer;
    }
};
