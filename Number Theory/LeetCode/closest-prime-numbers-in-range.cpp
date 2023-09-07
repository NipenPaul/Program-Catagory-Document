class Solution {
public:
    bool checkPrime[1000005];
    vector<int>primes;
    vector<int> closestPrimes(int left, int right) {
        sieve();
        for(int i = left; i <= right; i++)
        {
            if(!checkPrime[i])primes.emplace_back(i);
        }
        int n = primes.size();
        vector<int> v(2);
        if(n <= 1){
            v[0] = -1;
            v[1] = -1;
            return v;
        }
        int mn = 1e6+1;
        for(int i = 0; i < n-1; i++){
            int d = primes[i+1]-primes[i];
            if(mn > d){
                v[0] = primes[i];
                v[1] = primes[i+1];
                mn = d;
            }
        }
        return v;
    }
    void sieve()
    {
        checkPrime[1] = true;
        for(int i = 2; i * i < 1000001; i++)
        {
            if(!checkPrime[i])
            {
                for(int j = i * 2; j < 1000001; j += i)
                {
                    checkPrime[j] = true;
                }
            }
        }
    }
};
