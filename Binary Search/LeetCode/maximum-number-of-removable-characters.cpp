class Solution {
public:
    int maximumRemovals(string s, string p, vector<int>& removable) {
        int l = 0, r = removable.size()-1;
        int n = s.size(), ans = 0;
        while(l <= r){
            int m = (l+r) / 2;
            vector<bool> vis(n+1, 0);
            for(int i = 0; i <= m; i++){
                vis[removable[i]] = true;
            }
            string tem = "";
            for(int i = 0; i < n; i++){
                if(!vis[i]){
                    tem += s[i];
                }
            }
            if(isSubsequence(tem, p)){
                l = m+1;
                ans = l;
            }else{
                r = m-1;
            }
        }
        return ans;
    }
    bool isSubsequence(string &s, string &p){
        int j = 0;
        for(int i = 0; i < s.size(); i++){
            if(j < p.size() && s[i] == p[j]){
                j++;
            }
        }
        if(j == p.size()) return true;
        return false;
    }
};
