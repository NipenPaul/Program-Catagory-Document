#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define Mx 100005
#define ll long long

using namespace std;

void in(int arr[], int n)
{
  for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
}

 int main()
 {
    //fread;
    //fwrite;
    int t; scanf("%d", &t);
    while(t--)
    {
       int n, ans = 0; scanf("%d", &n);
       int arr[n];
       in(arr, n);

	 ll cum = 0, add = 0, mx = INT_MIN;
	 bool ck = true;

	 for(int i = 0; i < n; i++)
	 {
	    add += arr[i];
	 }

	 for(int i = 0; i < n - 1; i++)
	 {
        cum += arr[i];
        mx = max(cum, mx);
        if(cum < 0)
         cum = 0;
	 }

	 if(mx >= add)
	 {
	    ck = false;
	 }

	 cum = 0, mx = INT_MIN;
	for(int i = 1; i < n; i++)
	 {
        cum += arr[i];
        mx = max(cum, mx);
        if(cum < 0)
         cum = 0;
	 }

	 if(mx >= add)
	 {
	    ck = false;
	 }


	 if(ck) printf("YES");
	 else printf("NO");
	 printf("\n");
    }
    return 0;
}
