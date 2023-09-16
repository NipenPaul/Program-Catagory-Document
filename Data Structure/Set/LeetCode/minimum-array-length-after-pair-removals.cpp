class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int ans = nums.size();
        map<int, int> mp;
        vector<int> vec;
        for(int &x: nums){
            mp[x]++;
            if(mp[x] == 1){
                vec.push_back(x);
            }
        }
        set<pair<int, int>> se;
        for(int &x: vec){
            se.insert({mp[x], x});
        }
        for(auto it: se){
           // cout << it.first << " " << it.second << endl;
        }
        while(se.size() > 1){
            auto it1 = se.begin();
            int x = it1->first, y = it1->second;
            se.erase(it1);
            
            ans -= 2;
            
            auto it2 = se.rbegin();
            int xx = it2->first, yy = it2->second;
            se.erase(--se.end());
           // cout << y << " " << yy << endl;
           // cout << x << " " << xx << endl;
           // cout << se.size() << endl;
            x--;
            xx--;
            if(x > 0){
                se.insert({x, y});
            }
            if(xx > 0){
                se.insert({xx, yy});
            }
            
        }
        return ans;
    }
};