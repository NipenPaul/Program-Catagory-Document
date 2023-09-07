#include <bits/stdc++.h>

using namespace std;

int n, m;
int fx[] = {-1,-1,-1,0,1,1,1,0};
int fy[] = {-1,0,1,1,1,0,-1,-1};

bool check(int x, int y)
{
	return (1 <= x && n >= x && 1 <= y && m >= y);
}

int main(int argc, char const *argv[])
{
	int tc = 0;
	while(cin >> n >> m)
	{
		if(n == 0 && m == 0)return 0;
		if(tc) cout << "\n";
		char ch[n+1][m+1];
		int matrix[n+1][m+1];
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				cin >> ch[i][j];
			}
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				if(ch[i][j] == '.')
				{
					int ct = 0;
					for(int k = 0; k < 8; k++)
					{
						int x = fx[k] + i;
						int y = fy[k] + j;
						if(check(x,y) && ch[x][y] == '*')
							ct++;
					}	
					matrix[i][j] = ct;		
				}
				else
				{
					matrix[i][j] = -1;
				}
			}
		}
		cout << "Field #" << ++tc << ":\n";
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				if(matrix[i][j] == -1)
					cout << "*";
				else
				 	cout << matrix[i][j];
			}
			if(i != n)
			 cout << '\n';
		}
		cout << '\n';
	}
    return 0;
}