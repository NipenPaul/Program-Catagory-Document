class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int low = 0, high = (int)1e9;
        while(low <= high){
            int mid = (low + high) / 2;
            if(bin(nums, p, mid)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
    bool bin(vector<int>&nums, int p, int x){
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            
            if(i+1 < nums.size()){
                int d = abs(nums[i]-nums[i+1]);
                if(x >= d){
                    cnt++;
                    i++;
                }
            }
        }
        if(cnt >= p) return true;
        return false;
    }
    
};
