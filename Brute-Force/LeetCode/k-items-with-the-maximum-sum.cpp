class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        
        int ans = 0;
        ans = min(numOnes, k);
        k -= ans;
        if(k > 0){
            int d = min(numZeros, k);
            k -= d;
        }
        if(k > 0){
            int d = min(numNegOnes, k);
            ans -= d;
        }
        return ans;
    }
};
