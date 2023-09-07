#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define lim 1e5 + 5
#define Mod 1e9 + 7
#define ll long long
#define ull unsigned long long

using namespace std;

 int main()
 {
//      ios::sync_with_stdio(false);
//	  cin.tie(0);
    //fread;
    //fwrite;
    int t; scanf("%d", &t);
    while(t--)
    {
       int ar[3], n;
       cin >> ar[0] >> ar[1] >> ar[2] >> n;
       sort(ar, ar + 3);
       int sum = (ar[0] + ar[1] + ar[2] + n);
       int div = sum / 3;

       if(sum % 3 == 0 && ar[2] <= div)
       {
          cout << "YES" << '\n';
       }
       else
       {
         cout << "NO" << '\n';
       }
    }
    return 0;
 }

