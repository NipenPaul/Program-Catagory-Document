#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define lim 1e9
#define Mod 1e9 + 7
#define ll long long
#define ull unsigned long long

using namespace std;

map<int, int> ma;

 int main()
 {
      //ios::sync_with_stdio(false);
	  //cin.tie(0);
      //fread;
    //fwrite;
    int t; scanf("%d", &t);
    while(t--)
    {
       int n, s, m; cin >> n >> s >> m;
       for(int i = 0; i < m; i++)
       {
          int num;
          cin >> num;
          ma[num] = 1;
       }
       bool ck = true;
       int las = s, fa = s;
       bool l = false, f = false;
       while(ck)
       {
          if(ma[las] == 0 && las <= n)
          {
            ck = false;
            l = true;
            break;
          }
          if(ma[fa] == 0 && fa >= 1)
          {
            ck = false;
            f = true;
            break;
          }
          fa--;
          las++;
       }

       if(l)
       {
         cout << las - s << '\n';
       }
       else if(f)
       {
         cout << s - fa << '\n';
       }
       ma.clear();
    }
    return 0;
}
