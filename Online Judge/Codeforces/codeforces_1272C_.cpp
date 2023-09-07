#include<bits/stdc++.h>
#define fwrite freopen("in.txt","r",stdin)
#define fread freopen("out.txt","w",stdout)
#define Mx 100005
#define ll long long

using namespace std;

int main()
{
   ll n, k;
   cin >> n >> k;
   string ch;
   cin >> ch;
   char c;
   int arr[26] = {0};
   for(int i = 0; i < k; i++)
   {
      cin >> c;
      arr[c - 'a'] = 1;
   }
   ll ct = 0;
   ll ans = 0;
   for(int i = 0; i < n; i++)
   {
     if(arr[ch[i] - 'a'] == 0)
     {
        ans += ((ct * (ct + 1)) / 2);
        ct = 0;
     }
     else
     {
        ct++;
     }
   }
   ans += ((ct * (ct + 1)) / 2);
   cout << ans << '\n';
  return 0;
}

