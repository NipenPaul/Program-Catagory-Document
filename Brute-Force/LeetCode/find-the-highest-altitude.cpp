class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx = 0, sum = 0;
        for(int &x: gain){
            sum += x;
            if(mx < sum){
                mx = sum;
            }
        }
        return mx;
    }
};
