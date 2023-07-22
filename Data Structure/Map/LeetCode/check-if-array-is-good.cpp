class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int, int> ma;
        for(int i = 0; i < nums.size(); i++){
            ma[nums[i]]++;
        }
        int n = nums.size();
        for(int i = 1; i <= 101; i++){
            bool ok = true;
            int cnt = 2;
            for(int j = 1; j < i; j++){
                if(ma[j] != 1){
                    ok = false;
                }else{
                    cnt++;
                }
            }
            //cout << i << " " << cnt << endl;
            if(ok && ma[i] == 2 && cnt == n){
                return true;
            }
        }
        return false;
    }
};
