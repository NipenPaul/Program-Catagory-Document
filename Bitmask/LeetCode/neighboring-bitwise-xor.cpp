class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int x = 0;
        for(int &val: d){
            x ^= val;
        }
        return x == 0;
    }
};
