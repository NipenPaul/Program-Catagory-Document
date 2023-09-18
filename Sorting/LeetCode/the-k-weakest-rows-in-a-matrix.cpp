class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> vec;
        int i = 0;
        for(auto &it: mat){
            int cnt = 0;
            for(auto &x: it){
                if(x == 1) cnt++;
                else break;
            }
            vec.push_back({cnt, i});
            i++;
        }
        sort(vec.begin(), vec.end());
        vector<int> ans;
        for(int i = 0; i < k; i++){
            ans.push_back(vec[i].second);
        }
        return ans;
    }
};
