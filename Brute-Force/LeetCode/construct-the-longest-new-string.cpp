class Solution {
public:
    int longestString(int x, int y, int z) {
        int ans = z*2;
        int ct = min(x, y);
        ans += ct*2;
        if(x != y) ct++;
        ans += ct*2;
        return ans;
    }
};
