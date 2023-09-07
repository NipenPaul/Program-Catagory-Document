class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int, int> ma;
        for(int x: tasks){
            ma[x]++;
        }
        int ans = 0;
        for(auto [_,x]: ma){
            if(x == 1){
                return -1;
            }else{
                ans += ((x+2)/3);
            }
        }
        return ans;
    }
};
