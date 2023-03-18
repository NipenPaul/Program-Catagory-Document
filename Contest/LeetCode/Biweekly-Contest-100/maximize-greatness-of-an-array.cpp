class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = 0;
        int n = nums.size();
        vector<int> v(n+5, 0);
        int ct = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 0){
                while(j < n){
                    if(nums[i] < nums[j]){
                        //cout << i << endl;
                        ct++;
                        v[i] = 1;
                        //v[j] = 1;
                        j++;
                        break;
                    }else{
                        j++;
                    }
                }
            }
        }
        return ct;
    }
};
