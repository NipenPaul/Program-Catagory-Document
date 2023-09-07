class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        
        long long l = 1, r = 1e18, ok = 0;
        long long car = cars;
        while(l <= r){
            long long m = (l+r) / 2;
            long long ans = 0;
            for(int i = 0; i < ranks.size(); i++){
                long long ran = ranks[i];
                long long d = m / ran;
                if(d > 0)
                    ans += sqrt(d);
            }
            if(ans >= car){
                ok = m;
                r = m-1;
            }else{
                l = m+1;
            }
        }
        return ok;
    }
};
