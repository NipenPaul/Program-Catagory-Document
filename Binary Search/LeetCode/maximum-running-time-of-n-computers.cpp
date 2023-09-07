class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        long long sum = 0;
        for(int &x: batteries){
            sum += x;
        }
        long long low = 1, high = sum / n;
        long long ans = 0;
        while(low <= high){
            long long mid = (high + low) / 2;
            long long extra = 0;
            for(int &x: batteries){
                extra += min((long long)x, mid);
            }
            if(extra >= (long long)(n * mid)){
                ans = mid;
                low = mid+1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
    }
};
