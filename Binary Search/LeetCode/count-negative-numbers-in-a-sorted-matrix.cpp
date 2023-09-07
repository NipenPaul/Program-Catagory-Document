class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(auto &it: grid){
           ans += bin(it); 
        }
        return ans;
    }
    int bin(vector<int>&vec){
        int n = vec.size();
        int low = 0, high = n-1;
        int ind = 0;
        while(low <= high){
            int mid = (low + high) / 2;
            if(vec[mid] < 0){
                ind = n-mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ind;
    }
};
