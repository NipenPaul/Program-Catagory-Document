class Solution {
public:
    long long maximumOr(vector<int>& v, int k) {
        long long ans = 0, pw = 1 << k;
        int n = v.size();
        vector<long long> cuml(n+1, 0), cumr(n+2, 0);
        for(int i = 1; i <= n; i++){
            cuml[i] = cuml[i-1] | v[i-1];
        }
        for(int i = n; i >= 1; i--){
            cumr[i] = cumr[i+1] | v[i-1];
        }
        for(int i = 1; i <= n; i++){
            ans = max(ans, cuml[i-1] | cumr[i+1] | (pw*v[i-1]));
        }
        return ans;
    }
};
