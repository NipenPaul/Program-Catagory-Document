class Solution {
public:
    int accountBalanceAfterPurchase(int v) {
        
        int s = round((double)v/10.0);
        int ans = 100;
         ans -= s*10;
        return ans;
    }
};
