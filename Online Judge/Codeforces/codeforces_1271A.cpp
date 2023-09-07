#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define Mx 100005
#define ll long long int

using namespace std;

 int main()
 {
    //fread;
    //fwrite;
       ll a, b, c, d, e, f, ans = 0, ans2 = 0;
       cin >> a >> b >> c >> d >> e >> f;

       ll dd = d;

       ll tem = min(d, min(b, c));
       ans += tem * f;
       d -= tem ;
       tem = min(a, d);
       ans += tem * e;

       tem = min(a, dd);
        ans2 += tem * e;

        dd -= tem;
        tem = min(dd, min(b, c));
        ans2 += tem * f;

       cout << max(ans, ans2);

       printf("\n");
    return 0;
 }


