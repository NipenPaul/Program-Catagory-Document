#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

const int lim = 1e6 + 2;
bool checkPrime[lim];
vector<int>primes;

void sieve(){
  checkPrime[1] = true;
  for(int i = 2; i * i < lim; i++){
    if(!checkPrime[i]) {
      for(int j = i * 2; j < lim; j += i){
        checkPrime[j] = true;
      }
    }
  }
  for(int i = 2; i < lim; i++){
    if(checkPrime[i] == false){
      primes.push_back(i);
    }
  }
}
void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  sort(v.begin(), v.begin()+n);
  if(v[0] == v[n-1]){
    cout << "YES" << endl;
    return;
  }
  map<int, int> ma;
  for(int i = 0; i < n; i++){
    int val = v[i];
    for(int &x: primes){
      if(x*x > v[i]) break;
      while(val % x == 0 && val > 0){
        val /= x;
        ma[x]++;
      }
    }
    if(val > 1){
      ma[val]++;
    }
  }
  set<int> se;
  for(auto &[x, y]: ma){
    //CHECK(x); CHECK(y);
    if(y % n != 0){
      cout << "NO" << endl;
      return;
    }
  }  
  cout << "YES" << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  sieve();
  while(t--){
    solution();
  }
  return 0;
}