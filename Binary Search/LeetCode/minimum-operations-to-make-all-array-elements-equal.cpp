class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        long long n = nums.size();
        vector<long long> cum(n+1, 0);
        for(int i = 1; i <= n; i++){
            cum[i] = cum[i-1] + nums[i-1];
        }
        vector<long long> ans;
        for(int &xx: queries){
            long long x = xx;
            long long ind = bin(nums, x);
           // cout << ind << endl;
            if(ind == -1){
                ans.push_back(cum[n] - (n*x));
            }else{
                long long sm = cum[ind+1];
                long long big = cum[n] - sm;
                //cout << (n-(ind+1))  << endl;
               // cout << (ind+1)*x-sm  << " " << big-(n-ind+1)*x << endl;
                ans.push_back(((ind+1)*x)-sm + (big-(n-(ind+1))*x));
            }
        }
        return ans;
    }
    long long bin(vector<int>&nums, long long x){
        int l = 0, h = nums.size()-1;
        long long ind = -1;
        while(l <= h){
            int mid = (l+h)/2;
            if(x > nums[mid]){
                l = mid+1;
                ind = mid;
            }else{
                h = mid-1;
            }
        }
        return ind;
    }
};
