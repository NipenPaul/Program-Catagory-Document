#include<bits/stdc++.h>

using namespace std;

class Number
{
  public:
     int x, y;
};

bool Compares(Number a, Number b)
{
  if(a.x == b.x)
   return a.y < b.y;
  return a.x < b.x;
}

 int main()
 {
    int t; scanf("%d", &t);
    while(t--)
    {
		int n;
		scanf("%d", &n);
		Number ar[n+1];
		ar[0].x = 0, ar[0].y = 0;
		for(int i = 1; i <= n; i++)
		{
			scanf("%d%d",&ar[i].x, &ar[i].y);
		}
		sort(ar, ar + n+1, Compares);

//	    printf("\n");
//	    for(int i = 0; i <= n; i++)
//	    {
//	       printf("%d %d\n",ar[i].x, ar[i].y);
//	    }
		string ans; bool ck = false;
		for(int i = 1; i <= n; i++)
		{
			for(int j = ar[i- 1].x; j < ar[i].x; j++)
				ans.push_back('R');
			for(int j = ar[i- 1].y; j < ar[i].y; j++)
				ans.push_back('U');
			if(ar[i].y < ar[i - 1].y){
				ck = true;break;
			}
		}

		if(ck)printf("NO\n");
		else
		{
		  printf("YES\n"); cout << ans << '\n';
		}
    }
    return 0;
 }

