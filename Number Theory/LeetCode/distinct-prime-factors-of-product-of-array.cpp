class Solution {
public:
    bool checkPrime[10005];
    vector<int>primes;
    int distinctPrimeFactors(vector<int>& nums) {
        sieve();
        for(int i = 1; i < 10001; i++)
        {
            if(!checkPrime[i])primes.emplace_back(i);
        }
        set<int> se;
        for(int x: nums){
            for(int p: primes){
                while(x > 0 && x % p == 0){
                    x /= p;
                    se.insert(p);
                }
            }
            if(x > 0 && !checkPrime[x]){
                se.insert(x);
            }
        }
        return se.size();
    }
    void sieve()
    {
        checkPrime[1] = true;
        for(int i = 2; i * i < 10001; i++)
        {
            if(!checkPrime[i])
            {
                for(int j = i * 2; j < 10001; j += i)
                {
                    checkPrime[j] = true;
                }
            }
        }
    }
};
