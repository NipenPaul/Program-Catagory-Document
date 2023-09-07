class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int ans = 0;
        int n = words.size();
        vector<int> vis(n, 0);
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                string tem = words[j];
                reverse(tem.begin(), tem.end());
                if(vis[i] == 0 && vis[j] == 0 && tem == words[i]){
                    ans++;
                    vis[i] = 1;
                    vis[j] = 1;
                }
            }
        }
        return ans;
    }
};
