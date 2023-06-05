class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       double prex, prey;
       for(int i = 1; i < coordinates.size(); i++){
           double mx = coordinates[i][1]-coordinates[0][1];
           double my = coordinates[i][0]-coordinates[0][0];
           if(i == 1) prex = mx, prey = my;
           else if(prex*my != prey*mx) return false;
       }
       return true;
    }
};
