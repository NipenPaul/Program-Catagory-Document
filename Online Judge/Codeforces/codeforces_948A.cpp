#include<bits/stdc++.h>

using namespace std;

int main()
{
  int r, c;
  cin >> r >> c;
  char ch[505][505];
  for(int i = 1; i <= r; i++)
  {
	for(int j = 1; j <= c; j++)
	{
	   cin >> ch[i][j];
	}
  }

  for(int i = 1; i <= r; i++)
  {
	for(int j = 1; j <= c; j++)
	{
	   if(ch[i][j] == '.')
	   {
	      ch[i][j] = 'D';
	   }
	}
  }

  bool ck = true;

 for(int i = 1; i <= r; i++)
  {
	for(int j = 1; j <= c; j++)
	{
	   if(ch[i][j] == 'W')
	   {
	       if(ch[i - 1][j] == 'S' || ch[i+1][j] == 'S' || ch[i][j-1] == 'S' || ch[i][j+1] == 'S')
	       {
	          ck = false;
	          break;
	       }
	   }
	}
  }

  if(ck)
  {
    printf("YES\n");
	 for(int i = 1; i <= r; i++)
	  {
		for(int j = 1; j <= c; j++)
		{
		  cout << ch[i][j];
		}
		printf("\n");
	  }
   }
   else
   {
     printf("NO\n");
   }
  return 0;
}

