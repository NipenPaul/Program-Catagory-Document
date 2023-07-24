class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0){
            return 1.0/BigMod(x, abs(n));
        }
        return BigMod(x, n);
    }
    double BigMod(double base, int pw){
        double ans = 1;
        while(pw > 0){
            if(pw & 1){
                ans = (ans * base);
            }
            pw >>=1L;
            base = (base*base);
        }
        return ans;
    }
};
