#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  ll x, y;
  cin >> x >> y;
  ll tem = x - y;
  if(tem > 0 && tem % 2 == 0)
  {
    tem /= 2;
    ll ans1 = tem * 5;
    ll ans2 = tem * 3;
     if(ans1 <= x && ans2 <= y)
     cout << tem * 5 << " " << tem * 3 << '\n';
     else
     cout << "Not possible\n";
  }
  else{
  cout << "Not possible\n";
  }
  return 0;
}

