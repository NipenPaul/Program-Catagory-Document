#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define Mx 100005
#define ll long long

using namespace std;

void in(int arr[], int n)
{
  for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
}

void out(int arr[], int n)
{
  for(int i = 0; i < n; i++) printf("%d ",arr[i]);
}

 int main()
 {
    //fread;
    //fwrite;
    int t; scanf("%d", &t);
    while(t--)
    {
       int n, ans = 0; scanf("%d", &n);
       int k1, k2, ct = 0;
       cin >> k1 >> k2;
       for(int i = 0; i < k1; i++)
       {
          int tem;
          cin >> tem;
          if(tem == n) ct = 1;
       }
	  for(int i = 0; i < k2; i++)
       {
          int tem;
          cin >> tem;
          if(tem == n) ct = 2;
       }

       if(ct == 1) cout <<"YES";
       else cout << "NO";

       printf("\n");
    }
    return 0;
 }


