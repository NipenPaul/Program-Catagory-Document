class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char, int> ma;
        for(char &c: s){
            ma[c]++;
        }
        vector<int> vec;
        for(auto [y,x]: ma){
            vec.push_back(x);
        }
        sort(vec.begin(), vec.end(), greater<int>());
        int n = s.size();
        vector<int> vis(n+1, 0);
        int ans = 0;
        for(int &x: vec){
            while(vis[x] != 0 && x > 0){
                ans++;
                x--;
            }
            vis[x] = 1;
        }
        return ans;
    }
};