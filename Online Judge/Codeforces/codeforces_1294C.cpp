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
    //fread;
    //fwrite;
    int t; scanf("%d", &t);
    while(t--)
    {
      int n; scanf("%d", &n);
      vector<int> vec;
	  int tem = n;
	  for(int i = 2; i * i <= n; i++)
	  {
	     if(tem % i == 0)
	     {
	        vec.push_back(i);
	        tem /= i;

	        if(vec.size() == 2)
	        {
	          vec.push_back(tem);
	          break;
	        }
	     }
	  }
	  if(vec.size() == 3)
	  {
         if(vec[2] > vec[1])
         {
            printf("YES\n");
            for(auto it : vec)
            {
                printf("%d ", it);
            }
            printf("\n");
         }
         else
		  {
			printf("NO\n");
		  }
	  }
	  else
	  {
	    printf("NO\n");
	  }
    }
    return 0;
 }


