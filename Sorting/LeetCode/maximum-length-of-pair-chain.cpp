class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int cnt = 1;
        sort(pairs.begin(), pairs.end(), [&](const auto &a, const auto &b){
            if(a[0] == b[0]){
                return a[1] < b[1];
            }
            return a[0] < b[0];
        });
        // for(auto &it: pairs){
        //     cout << it[0] << ", " << it[1] << endl;
        // }
        int mn = pairs[0][1];
        for(int i = 1; i < pairs.size(); i++){
            if(mn < pairs[i][0]){
                cnt++;
                mn = pairs[i][1];
            }
            mn = min(pairs[i][1], mn);
        }
        return cnt;
    }
};
