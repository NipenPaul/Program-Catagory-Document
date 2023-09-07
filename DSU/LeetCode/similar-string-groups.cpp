class Solution {
public:
    int p[305]; // initially p[i] = i;
    int Find(int x){
        if(p[x] == x) return x;
        return p[x] = Find(p[x]);
    }
    void Union(int a, int b){
        p[Find(b)] = Find(a);
    }
    int numSimilarGroups(vector<string>& strs) {
        int n = strs.size();
        map<pair<int, int>, int> mp;
        vector<int> vis(n, 0);
        int ans = n;
        for(int i = 0; i < n; i++){
            p[i] = i;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                int cnt = 0;
                for(int k = 0; k < strs[0].size(); k++){
                    if(strs[i][k] != strs[j][k]){
                        cnt++;
                    }
                }
                if(cnt <= 2 && mp[{i, j}] == 0 && mp[{j, i}] == 0 && i != j && Find(i) != Find(j)){
                    mp[{i, j}] = 1;
                    mp[{j, i}] = 1;
                    ans--;
                    Union(i, j);
                    vis[i] = 1;
                    vis[j] = 1;
                }
            }
        }
        return ans;
    }
};
