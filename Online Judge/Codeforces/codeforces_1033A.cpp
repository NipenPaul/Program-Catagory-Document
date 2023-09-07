#include<bits/stdc++.h>

using namespace std;

const int lim = 1e3 + 2;

int n, xa, ya, xb, yb, dx, dy;

bool visited[lim][lim];
bool ok = false;

int drx[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dry[] = {-1, -1, -1, 0, 1, 1, 1, 0};

bool ck(int x, int y)
{
 return (((xa - ya)==(x - y)) || ((xa + ya)==(x + y)) || (x == xa) || (y == ya));
}

void dfs(int x, int y)
{
    if(x == dx && y == dy)
    {
      ok = true;
      return;
    }
  visited[x][y] = true;
  for(int i = 0; i < 8; i++)
  {
     int xx = drx[i] + x;
     int yy = dry[i] + y;
     if(!visited[xx][yy] && !ck(xx, yy) && x <= n && y <= n && x > 0 && y > 0)
     {
        dfs(xx, yy);
     }
  }
}


int main()
{
   cin >> n >> xa >> ya >> xb >> yb >> dx >> dy;
   dfs(xb, yb);
   if(ok)cout << "YES\n";
   else cout << "NO\n";
   return 0;
}
