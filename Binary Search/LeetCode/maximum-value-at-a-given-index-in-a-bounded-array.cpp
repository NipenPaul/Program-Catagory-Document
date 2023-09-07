class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        int low = 1, high = maxSum;
        int ans = 0;
        while(low <= high){
            int mid = (low+high)/2;
            if(check(mid, index, maxSum, n)){
                low = mid+1;
                ans = mid;
            }else{
                high = mid-1;
            }
        }
        return ans;
    }
    bool check(int x, int ind, int mx, int n){
        long long l = ind;
        long long r = n-ind;
        long long mn = max((long long)1, (long long)x-l);
        long long mr = max((long long)1, (long long)x-r+1);

        //cout << "mn = "<< mn << ", mr = " << mr << endl;

        long long ans = 0;
        long long nn = x-mn+1;
        ans += (nn * (2 * mn + (nn - 1)))/2;
        ans += ((ind+1)-nn);
        nn = x-mr;
        ans += (nn * (2 * mr + (nn - 1)))/2;
        ans += (n - (ind+nn)-1);
        //cout << x << " " << ans << endl;
        if(mx >= ans) return true;
        return false;
    }
};
