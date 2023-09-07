const int lim = 320;
bool checkPrime[lim];
vector<int>primes;

class Solution {
public:
    int smallestValue(int n) {
        sieve();
        for(int i = 1; i < lim; i++){
            if(!checkPrime[i])primes.emplace_back(i);
        }
        int ans = n;
        while(true){
            int sum = 0;
            int tem = n;
            for(int x: primes){
                while(n % x == 0){
                    n /= x;
                    sum += x;
                }
            }
            if(n > 1){
                sum += n;
            }
            if(sum != 0)
                ans = min(ans, sum);
            if(sum == tem)break;
            n = sum;
        }
        return ans;
    }
    void sieve(){
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
};
