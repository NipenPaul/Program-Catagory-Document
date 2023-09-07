#include<bits/stdc++.h>
#define lim 10

using namespace std;

bool adj[lim][lim];
bool visited[lim][lim];
int cost[lim][lim];

int dr[] = {-2,-2,-1,1,2,2,1,-1};
int dc[] = {1,-1,-2,-2,-1,1,2,2};

int valid(int r, int c)
{
    return ( r >= 1 && c >= 1 && r < 9 && c < 9 && !visited[r][c] && !cost[r][c]);
}

void bfs(int x, int y)
{
   visited[x][y] = true;
   queue<int> que;
   que.push(x);
   que.push(y);

   while(!que.empty())
   {
       int r = que.front();
       que.pop();
       int c = que.front();
       que.pop();

       for(int i = 0; i < 8; i++)
       {
         int rx = r + dr[i];
         int ry = c + dc[i];
         if(valid(rx, ry))
         {
             que.push(rx);
             que.push(ry);
             visited[rx][ry] = true;
             cost[rx][ry] = cost[r][c] + 1;
         }
       }
   }
}

int main()
{
    string ch1, ch2;
    while(cin >> ch1 >> ch2)
    {
        memset(adj, false, sizeof(adj));
        memset(visited, false, sizeof(visited));
        memset(cost, 0, sizeof(cost));

       adj[ch1[0] - 'a'+1][ch1[1] - '0'] = true;
       adj[ch2[0] - 'a'+1][ch2[1] - '0'] = true;

       bfs(ch1[0] - 'a'+1, ch1[1] - '0');
       cout <<"To get from " << ch1 <<" to " << ch2 <<" takes ";
       cout << cost[ch2[0] - 'a'+1][ch2[1] - '0'] <<" knight moves." << '\n';
//
//       for(int i = 1; i <= 8; i++)
//       {
//           for(int j = 1; j <= 8; j++)
//           {
//               cout << adj[i][j] << " ";
//           }
//           cout << '\n';
//       }
    }
    return 0;
}
