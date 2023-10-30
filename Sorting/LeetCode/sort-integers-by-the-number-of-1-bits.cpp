class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [&](int a, int b){
            if(cntBit(a) == cntBit(b)) return a < b;
            return cntBit(a) < cntBit(b);
        });
        return arr;
    }
    int cntBit(int n){
        int cnt = 0;
        while(n != 0){
            cnt += (n % 2);
            n /= 2;
        }
        return cnt;
    }
};