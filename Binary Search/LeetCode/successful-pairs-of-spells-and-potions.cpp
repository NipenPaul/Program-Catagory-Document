class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> v;
        for(int &x: spells){
           v.push_back(binarySearch(potions, x, success));
        }
        return v;
    }
    int binarySearch(vector<int>&v, int x, long long s){
        int low = 0, high = v.size()-1, ans = 0;
        while(low <= high){
            int mid = (low + high) / 2;
            long long d = (long long)(v[mid]) * (long long) (x);
            if(d >= s){
                high = mid-1;
                ans = v.size()-mid;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};
