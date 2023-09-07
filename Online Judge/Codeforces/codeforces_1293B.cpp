#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define lim 1e9
#define Mod 1e9 + 7
#define ll long long
#define ull unsigned long long

using namespace std;

 int main()
 {
      //ios::sync_with_stdio(false);
	  //cin.tie(0);
      //fread;
    //fwrite;
    long double n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
         ans = ans + (1.0/i);
    }
     cout << setprecision(12) << fixed << ans << '\n';
    return 0;
}
