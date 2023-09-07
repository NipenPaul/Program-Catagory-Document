#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define Mx 100005
#define ll long long

using namespace std;


int main()
{
    //fread;
    //fwrite;
       ll n, x; cin >> n;
	   x = sqrt(n) + 1;

	   for(; x >= 1; x--)
	   {
	      if(n % x == 0)
	      {
            ll tem = n / x;
            ll gc = __gcd(x, tem);
            ll lc =  (tem * x) / gc;
            if(lc == n)
            {
               cout << min(x, tem) << " " << max(x, tem) << '\n';
               return 0;
            }
	      }
	   }
	   if(n == 1) printf("1 1\n");
    return 0;
}


