#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;
const int lim = 288680;
bool checkPrime[lim];
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
void solution(){
  int n; cin >> n;
  int sz = primes.size();
  //cout << sz << endl;
  int ans = 0;
  for(int i = 0; i < sz; i++){
    for(int j = i+1; j < sz; j++){
      for(int k = j+1; k < sz; k++){
        int d = primes[i]*primes[i]*primes[j];
        if(d > n){
          break;
        }
        d *= primes[k];
        if(d > n){
          break;
        }
        d *= primes[k];
        if(d > n){
          break;
        }
        ans++;
      }
    }
  }
  cout << ans << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; //cin >> t;
  sieve();
  for(int i = 1; i < lim; i++)
  {
    if(!checkPrime[i])primes.emplace_back(i);
  }
  while(t--){
    solution();
  }
  return 0;
}