class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> v(n, false);
        v[0] = true;
        set<int> se;
        for(int x: rooms[0]){
            se.insert(x);
        }
        int ct = 1;
        while(se.size() > 0){
            int x = *se.begin();
            v[x] = true;
            ct++;
            se.erase(se.begin());
            for(int xx: rooms[x]){
                if(v[xx] == false)
                    se.insert(xx);
            }
        }
        if(ct == n) return true;
        return false; 
    }
};
