class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vec;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int low = i, high = n-1, ans = i;
            while(low <= high){
                int mid = (low+high)/2;
                long long x = (long long)nums[mid]-(long long)nums[i];
                if(mid-i == x){
                    ans = mid;
                    low = mid+1;
                }else{
                    high = mid-1;
                }
            }
            string tem = "";
            if(nums[i] == nums[ans]){
                tem += to_string(nums[i]);
            }else{
                tem += to_string(nums[i]);;
                tem += "->";
                tem += to_string(nums[ans]);;
            }
            vec.push_back(tem);
            i = ans;
        }
        return vec;
    }
};
