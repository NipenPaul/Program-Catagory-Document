class Solution {
public:
    int minOperations(vector<int>& nums) {
        int g = 0;
        int one = 0;
        for(int &x: nums){
            g = gcd(x, g);
            if(x == 1) one++;
        }
        if(g > 1){
            return -1;
        }
        int n = nums.size();
        int ans = n-one;
        int cnt = 0;
        
        while(true){
            g = 0;
            bool ok = false;
            for(int i = 0; i < nums.size()-1; i++){
                g = gcd(nums[i], nums[i+1]);
                if(g == 1){
                    ok = true;
                    break;
                }
            }
            if(ok) break;
            cnt++;
            for(int i = 0; i < nums.size()-1; i++){
                g = gcd(nums[i], nums[i+1]);
                nums[i] = g;
                //nums[i+1] = g;
            }
        }
        return ans+cnt;
    }
};
