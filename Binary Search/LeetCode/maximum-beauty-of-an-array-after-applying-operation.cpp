class Solution {
public:
    int maximumBeauty(vector<int>& nums, int kk) {
        sort(nums.begin(), nums.end());
        long long ans = 0;
        long long k = kk;
        for(long long i = 0; i <= 100000; i++){
            long long h = binH(nums, i+k);
            long long l = binL(nums, i-k);
            long long a = h-l+1;
           // cout << "x = " << i+k << endl;
           // cout << "xl = " << i-k << endl;
           // cout << "h = " << h << endl;
           // cout << "l = " << l << endl;
           // cout << "a = " << a << endl;
            ans = max(a, ans);
        }
        return ans;
    }
    long long binH(vector<int>&nums, long long x){
        long long low = 0, high = nums.size()-1;
        long long ind = 0;
        while(low <= high){
            long long mid = (low+high)/2;
            if(nums[mid] <= x){
                ind = mid;
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return ind;
    }
    long long binL(vector<int>&nums, long long x){
        long long low = 0, high = nums.size()-1;
        long long ind = high;
        while(low <= high){
            long long mid = (low+high)/2;
            if(nums[mid] >= x){
                ind = mid;
                high = mid-1;
            }else{
               low = mid+1;
            }
        }
        return ind;
    }
};
