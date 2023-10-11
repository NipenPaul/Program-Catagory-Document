class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> st;
        vector<int> en;
        
        for (vector<int>& flower : flowers) {
            st.push_back(flower[0]);
            en.push_back(flower[1] + 1);
        }
        
        sort(st.begin(), st.end());
        sort(en.begin(), en.end());
        vector<int> ans;
        
        for (int x : people) {
            int l = upper_bound(st.begin(), st.end(), x) - st.begin();
            int r = upper_bound(en.begin(), en.end(), x) - en.begin();
            ans.push_back(l - r);
        }
        
        return ans;
    }
};