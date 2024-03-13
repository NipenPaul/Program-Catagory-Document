class Solution {
public:
    int pivotInteger(int n) {
        for (int i = 1; i <= n; i++) {
            int preSum = i * (i + 1) / 2;
            int nth = n - i + 1;
            int postSum = nth * (2 * i + (nth -1) ) / 2;
            if (preSum == postSum) return i;
        }

        return -1;
    }
};