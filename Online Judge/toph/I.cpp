#include<bits/stdc++.h>
#define PI acos(-1.0)

using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
	 long double A, area = 0.0, ans = 0.0, tem;
     cin >> A;
     tem = sqrt(A) / 2.0;
     area = A - (PI * tem * tem);
     ans = 2.0 * PI * tem;

     cout << setprecision(16) << fixed;
     cout << area << " " << ans << '\n';

   }
  return 0;
}
