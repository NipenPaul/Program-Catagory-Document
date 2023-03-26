class Solution {
public:
    const int lim = 1e3 + 5;
    bool checkPrime[1005];
    vector<int>primes;

    void sieve()
    {
        checkPrime[1] = true;
        for(int i = 2; i * i < lim; i++)
        {
            if(!checkPrime[i])
            {
                for(int j = i * 2; j < lim; j += i)
                {
                    checkPrime[j] = true;
                }
            }
        }
    }
    bool primeSubOperation(vector<int>& nums) {
        sieve();
        for(int i = 1; i < lim; i++)
        {
            if(!checkPrime[i])primes.emplace_back(i);
        }
        int pre = 0;
        for(int i = 0; i < nums.size(); i++){
            int mn = nums[i];
            for(int &x: primes){
                if(nums[i] > x && (nums[i]-x) > pre){
                    mn = (nums[i]-x);
                }
            }
            nums[i] = mn;
            pre = mn;
            cout << mn << " ";
            if(i > 0 && nums[i] <= nums[i-1]){
                return false;
            }
            //cout << mn << " ";
        }
        return true;
    }
};
