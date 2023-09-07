class Solution {
public:
    vector<pair<int, int>> v;
    int minIncrements(int n, vector<int>& cost) {
        int ans = 0;
        v.resize(4*n+1);
        rec(1, n, cost[0], cost);
        int x, y;
        for(int i = n; i > 1; i -= 2){
           // cout << i << " = " << v[i] << " "<< endl;
           // cout << i-1 << " = " << v[i-1] << " "<< endl;
            x = max(v[i].first, v[i].second);
            y = max(v[i-1].first, v[i-1].second);
            //cout << x << " " << y << endl;
            if(x != 0 && y != 0){
                ans += abs(x-y);
            }
            int d = i/2;
            v[d].first = x;
            v[d].second = y;
        }
        v.clear();
        return ans;
    }
    void rec(int node, int n, int x, vector<int>& cost){
        if(n < node){
            return;
        }
        
        int left = 2*node;
        int right = 2*node+1;
        
        if(left <= n){
            rec(left, n, x+cost[left-1], cost);
        }
        if(right <= n){
            rec(right, n, x+cost[right-1], cost);
        }
        if(left > n && right > n){
           int d = left/2;
           v[d].first = x;
           v[d].second = 0;
        }
    }
};
