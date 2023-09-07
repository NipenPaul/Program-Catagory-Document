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
       string p, h;
       cin >> p >> h;

       sort(p.begin(), p.end());
	   int lenp = p.size();
	   int lenh = h.size();

	   bool ck = false;

       for(int i = 0; i < lenh; i++)
       {
		  string ch = h.substr(i, lenp);
          sort(ch.begin(), ch.end());
          //cout << ch << endl;
          if(ch == p)
          {
            ck = true;
            break;
          }
       }

       if(ck) printf("YES");
       else printf("NO");

       printf("\n");
    }
    return 0;
 }
