#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
		ll n;
		cin >> n;
		n = (-1 + sqrt(1+ (8 * n)))/ 2;
		cout << n << '\n';
  }
  return 0;
}

