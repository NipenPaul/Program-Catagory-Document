class Solution {
public:
    int bestClosingTime(string s) {
        int n = s.size();
        vector<int>leftCum(n+1, 0), rightCum(n+1, 0);
        // kept the track how many occurrence char N from index to left.
        for(int i = 0; i < n; i++){
            leftCum[i+1] = leftCum[i] + (s[i] == 'N');
        }
        // kept the track how many occurrence char y from index to right.
      
        for(int i = n-1; i >= 0; i--){
            rightCum[i] = rightCum[i+1] + (s[i] == 'Y');
        }
        int ind = 0, mn = rightCum[0];
        // Now, I did Calculation for every index and try to find which index get minimum value.
        for(int i = 1; i <= n; i++){
            int cal = leftCum[i] + rightCum[i];
            if(mn > cal){
                mn = cal;
                ind = i;
            }
        }
        return ind;
    }
};
