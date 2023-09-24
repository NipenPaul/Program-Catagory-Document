class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>>vec(102, vector<double>(102));
        vec[0][0] = (double) poured;
        for(int i = 0; i <= query_row; i++){
            for(int j = 0; j <= i; j++){
                double val = (vec[i][j] - 1.0) / 2.0;
                if(val > 0){
                    vec[i+1][j] += val;
                    vec[i+1][j+1] += val;
                }
            }
        }
        return min(1.0, vec[query_row][query_glass]);
    }
};