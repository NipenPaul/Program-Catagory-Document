#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll BigMod(ll b, ll p, ll m)
{
  ll r = 1;
  while(p > 0)
  {
    if(p % 2 == 1) r = (r * b) % m;
    p /= 2;
    b = (b * b) % m;
  }
  return r;
}

int main()
{
   ll b, p, m;
   while(cin >> b >> p >> m)
   {
     cout << BigMod(b, p, m) << '\n';
   }
  return 0;
}
