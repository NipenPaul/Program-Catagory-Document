class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> cnt(n, 0);
        int ind = 0, i = 1;
        cnt[0] = 1;
        while(true){
            ind = (ind + i * k) % n;
            i++;
            cnt[ind]++;
            if(cnt[ind] > 1) break;
        }
        vector<int> v;
        for(int i = 0; i < n; i++){
            if(cnt[i] == 0){
                v.push_back(i+1);
            }
        }
        return v;
    }
};
