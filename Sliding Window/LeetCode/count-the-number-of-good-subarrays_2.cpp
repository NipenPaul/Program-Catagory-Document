class Solution {
public:
    long long countGood(vector<int>& v, int k) {
        long long cnt = 0, ans = 0;
        map<int, int> ma;
        int n = v.size(), l = 0;
        for(int i = 0; i < n; i++){
            cnt -= ((ma[v[i]] * (ma[v[i]] - 1)) / 2);
            ma[v[i]]++;
            cnt += ((ma[v[i]] * (ma[v[i]] - 1)) / 2);
            while(cnt >= k){
                ans += (n - i);
                cnt -= ((ma[v[l]] * (ma[v[l]] - 1)) / 2);
                ma[v[l]]--;
                cnt += ((ma[v[l]] * (ma[v[l]] - 1)) / 2);
                l++;
            }
        }
        return ans;
    }
};
