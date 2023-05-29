class Solution {
public:
    const int N = 1e5+5;
    vector<int> prime;
    vector<bool> vis;
    void sieve(){
        vis.resize(N, 0);
        vis[1] = 1;
        int sq = sqrt(N);
        for(int i = 2; i <= sq; i++){
            if(!vis[i]){
                for(int j = i*2; j < N; j += i){
                    vis[j] = true;
                }
            }
        }
        for(int i = 2; i < N; i++){
            if(!vis[i])
                prime.push_back(i);
        }
    }
    bool canTraverseAllPairs(vector<int>& nums) {
        sieve();
        int n = nums.size();
        vector<vector<int>> adj(n+5);
        vector<int> cnt(N, 0);
        int sz = 0;
        for(int i = 0; i < n; i++){
            int val = nums[i];
            for(int &x: prime){
                while(val % x == 0){
                    val /= x;
                    if(cnt[x] > 0 && cnt[x] != (i+1)){
                        adj[cnt[x]].push_back(i+1);
                        adj[i+1].push_back(cnt[x]);
                    }else
                        cnt[x] = i+1;
                }
                long long xx = x;
                xx *= (long long)x;
                if(xx > nums[i]) break;
            }
            if(val > 1){
                 if(cnt[val] > 0 && cnt[val] != (i+1)){
                    adj[cnt[val]].push_back(i+1);
                    adj[i+1].push_back(cnt[val]);
                 }else
                    cnt[val] = i+1;
            }
        }
        int x = 0;
        vector<bool> vis(n+5, false);
        function<void(int, int)> dfs = [&](int u, int pa){
            x++;
            vis[u] = true;
            //cout << u << endl;
            for(int &v: adj[u]){
                if(vis[v]) continue;
                dfs(v, u);
            }
        };
        dfs(1, -1);
        if(x == n) return true;
        return false;
    }
};
