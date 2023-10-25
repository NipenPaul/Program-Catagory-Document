class Solution {
public:
    int kthGrammar(int n, int k) {
        return rec(n, k);
    }
    int rec(int n, int k){
        if(n == 1) return 0;
        int cnt = 1 << (n-1);
        int div = cnt >> 1;
        if(k > div){
            return 1 - kthGrammar(n, k-div);
        }
        return rec(n-1, k);
    }
};