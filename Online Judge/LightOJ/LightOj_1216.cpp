#include<bits/stdc++.h>
#define PI acos(-1.0)

using namespace std;

int main()
{
  int t;
  cin >> t;
  for(int test = 1; test <= t; test++)
  {
    long double r1, r2, h, p, r3, x, ans = 0;
    cin >> r1 >> r2 >> h >> p;

    x = (r2 * h) / (r1 - r2);
    r3 = (r2 *( p + x)) / x;

    ans = ((PI * p) *((r3 * r3) + (r2 * r2) + (r2 * r3))) / 3.0;
    cout << "Case " << test << ": ";
    printf("%.9llf\n",ans);


  }
  return 0;
}

