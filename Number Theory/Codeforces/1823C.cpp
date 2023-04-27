#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

const int lim = 1e4 + 5;
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
  vector<int> v(n);
  set<int> se;
  map<int, int> mp;
  int cnt = 0;
  for(int &x: v){
    cin >> x;
    int num = x;
    for(int &p: primes){
      while(num % p == 0){
        mp[p]++;
        num /= p;
        se.insert(p);
        cnt++;
      }
      if(p*p > num) break;
    }
    if(num > 1){
      mp[num]++;
      se.insert(num);
      cnt++;
    }
  }
  if(se.size() == 2 && cnt == 2){
    cout << 0 << '\n';
    return;
  }else if(se.size() == 1 && cnt == 1){
    cout << 0 << '\n';
    return;
  }
  int ans = 0, ct = 0;
  for(int x: se){
    //cout << x << '\n';
    ans += (mp[x] / 2);
    ct += (mp[x] % 2);
  }
  ans += (ct/3);
  cout << ans << '\n';
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  sieve();
  for(int i = 1; i < lim; i++)
  {
      if(!checkPrime[i])primes.emplace_back(i);
  }
  cin >> t;
  while(t--){
    solution();
  }
  return 0;
}