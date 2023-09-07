#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define Mx 100005
#define ll long long

using namespace std;

 int main()
 {
    //fread;
    //fwrite;
    int t; scanf("%d", &t);
    while(t--)
    {
       int n, ans = 0; scanf("%d", &n);
       int arr[n];
       for(int i = 0; i < n; i++)
       {
          scanf("%d", &arr[i]);
       }
        bool ok = true;
		for(int i = 0; i < n - 1; i++)
		{    int tem;
            tem = abs(arr[i] - arr[i+1]);
            if(tem >1)
            {
              ok = false;
              cout << "YES\n" << i + 1 << " " << i + 2 << '\n';
                 break;
            }
		}

		if(ok) printf("NO\n");

    }
    return 0;
 }



