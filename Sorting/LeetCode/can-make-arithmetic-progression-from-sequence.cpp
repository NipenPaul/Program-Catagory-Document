class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        set<int> se;
        for(int i = 1; i < arr.size(); i++){
            se.insert(arr[i]-arr[i-1]);
        }
        if(se.size() == 1) return true;
        return false;
    }
};
