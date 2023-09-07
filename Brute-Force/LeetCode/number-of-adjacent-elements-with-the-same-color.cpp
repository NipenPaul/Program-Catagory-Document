class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        vector<int> v;
        vector<int> ar(n+5, 0);
        int cnt = 0;
        for(auto &it: queries){
            int ind = it[0]+1;
            int val = it[1];
            
            if(ar[ind] == ar[ind-1] && ar[ind] != 0){
                cnt--;
            }
            if(ar[ind] == ar[ind+1] && ar[ind] != 0){
                cnt--;
            }
            ar[ind] = val;
            if(ar[ind] == ar[ind-1] && ar[ind] != 0){
                cnt++;
            }
            if(ar[ind] == ar[ind+1] && ar[ind] != 0){
                cnt++;
            }
            v.push_back(cnt);
        }
        return v;
    }
};
