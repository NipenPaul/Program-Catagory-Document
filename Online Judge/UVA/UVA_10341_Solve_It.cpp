#include<bits/stdc++.h>

using namespace std;

double p, q, r, s, t, u;

double calclation(double x) {
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}


int main()
{
  //freopen("in.txt", "r", stdin);
  //freopen("out.txt", "w", stdout);
  while(cin >> p >> q >> r >> s >> t >> u)
  {
     if(!p && !q && !r && !s && !t && !u)
     {
        printf("0.0000\n");continue;
     }
      double low = 0.0, high = 1.0, mid;
      int i = 1;
      bool ck = true;
      while(i <= 100)
      {
        i++;
        mid = (low + high) / 2.0;
        double x = calclation(mid);

        if(fabs(x) < 0.000000000001)
        {
           printf("%.4lf\n", mid);
		   ck = false;
           break;
        }
         else if(x < 0.0)
         {
            high = mid;
         }
         else
         {
            low = mid;
         }
      }

      if(ck)
      {
        printf("No solution\n");
      }
  }
  return 0;
}
