class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0;
        long long cnt1 = 0, cnt2 = 0;
        for(int &x: nums1){
            sum1 += x;
            if(x == 0) cnt1++;
        }
        for(int &x: nums2){
            sum2 += x;
            if(x == 0) cnt2++;
        }
        if(cnt1 == 0 && cnt2 == 0 && sum1 == sum2){
            return sum1;
        }
        if(cnt1 == 0 && cnt2 == 0 && sum1 != sum2){
            return -1;
        }
        if(cnt2 >= 1 && cnt1 >= 1){
            return max(sum1+cnt1, sum2+cnt2);
        }
        if(cnt1 >= 1 && cnt2 == 0){
            if(sum2 >= sum1+cnt1){
                return sum2;
            }else{
                return -1;
            }
        }
        if(cnt2 >= 1 && cnt1 == 0){
            if(sum1 >= sum2+cnt2){
                return sum1;
            }else{
                return -1;
            }
        }
        return 0;
    }
};