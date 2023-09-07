#include<bits/stdc++.h>
#define limit 1001

using namespace std;

bool matrix[limit][limit], visited[limit][limit];
int cost[limit][limit], row, column;

int dr[] = {-1, 0, 1, 0};
int dc[] = {0, 1, 0, -1};

bool valid(int r, int c)
{
  return (r >= 0 && r < row && c >= 0 && c < column && !matrix[r][c] && !visited[r][c] && !cost[r][c]);
}

void bfs(int r, int c)
{
    int qx, qy, vx, vy;
     queue<int> que;
     que.push(r);
     que.push(c);
     visited[r][c] = true;

     while(!que.empty())
     {
        qx = que.front();
        que.pop();
        qy = que.front();
        que.pop();

        for(int i = 0; i < 4; i++)
        {
           vx = qx + dr[i];
           vy = qy + dc[i];

           if(valid(vx, vy))
           {
              visited[vx][vy] = true;
              que.push(vx);
              que.push(vy);

              cost[vx][vy] = cost[qx][qy] + 1;
           }
        }

     }
}

int main()
{
   //freopen("in.txt","r", stdin);
   while(scanf("%d%d", &row, &column) && row && column)
   {
      memset(matrix, false, sizeof(matrix));
      memset(visited, false, sizeof(visited));
      memset(cost, 0, sizeof(cost));

      int q, r, n, c;
      scanf("%d", &q);
      while(q--)
      {
        scanf("%d%d", &r, &n);
        for(int i = 0; i < n; i++)
        {
		  scanf("%d", &c);
		  matrix[r][c] = true;
        }
      }
      scanf("%d%d",&r, &c);
      bfs(r, c);
      scanf("%d%d",&r, &c);
      printf("%d\n", cost[r][c]);
   }
  return 0;
}
