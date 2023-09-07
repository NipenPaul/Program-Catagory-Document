class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0, high = m-1;
        int indi = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(matrix[mid][0] <= target){
                indi = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        if(indi == -1) return false;
        low = 0, high = n - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(matrix[indi][mid] == target){
                return true;
            }else if(matrix[indi][mid] < target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return false;
    }
};
