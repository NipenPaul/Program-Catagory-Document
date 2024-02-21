class Solution {
public:
    int rangeBitwiseAnd(int l, int r) {
        int cnt = 0;
        while (l < r) {
            l >>= 1;
            r >>= 1;
            cnt++;
        }
        //cout << l << endl;
        return l << cnt;
    }
};