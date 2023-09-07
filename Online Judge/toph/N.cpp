#include<bits/stdc++.h>
#define mod 1000000007
#define mx 1000001
#define ll long long

using namespace std;

vector <ll> vec(mx);

void com()
{
  vec[0] = 0;
  vec[1] = 1;

  for(int i = 2; i < mx; i++)
  {
    vec[i] =  (vec[i - 1] + vec[i - 2]) % mod;
  }
}

int main()
{
 com();
 int t;
 cin >> t;
 while(t--)
 {
    int n; cin >> n;
    cout << vec[n]  << '\n';
 }
  return 0;
}
