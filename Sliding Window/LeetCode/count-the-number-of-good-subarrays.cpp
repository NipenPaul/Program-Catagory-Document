class Solution {
public:
    long long countGood(vector<int>& v, int k) {
        long long ans = 0;
        map<int, int> ma;
        int n = v.size(), l = 0, cnt = 0;
        for(int i = 0; i < n; i++){
            cnt += ma[v[i]];
            ma[v[i]]++;
            while(cnt >= k){
                ans += (n - i);
                cnt -= ma[v[l]] - 1;
                ma[v[l]]--;
                l++;
            }
        }
        return ans;
    }
};
