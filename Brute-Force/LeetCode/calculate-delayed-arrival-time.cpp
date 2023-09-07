class Solution {
public:
    int findDelayedArrivalTime(int a, int d) {
        int x = a+d;
        if(x == 24){
            return 0;
        }else if(x < 24){
            return x;
        }
        return x-24;
    }
};
