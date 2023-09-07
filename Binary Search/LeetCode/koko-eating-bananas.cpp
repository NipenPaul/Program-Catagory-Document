class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = (int)1e9, low = 1, ans = 0;
        while(low <= high){
            int mid = (low+high)/2;
            bool ok = check(piles, h, mid);
            if(ok){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
    bool check(vector<int>&p, int h, int m){
        long long int ct = 0;
        for(int x: p){
            ct += x/m;
            if(x % m) ct++;
        }
        if(h >= ct) return true;
        return false;
    }
};
