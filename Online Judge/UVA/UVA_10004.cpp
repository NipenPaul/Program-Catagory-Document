#include<bits/stdc++.h>

using namespace std;

const int lim = 1e2 * 2 + 1;
const int WHITE = 1;
const int BLACk = 2;

vector<int> adj[lim];
bool visited[lim];
int color[lim];
bool ck = true;

void bfs(int src)
{
   visited[src] = true;
   queue<int> que;
   que.push(src);
   color[src] = WHITE;

   while(!que.empty())
   {
        int parent = que.front();
        que.pop();

        for(int i = 0; i < adj[parent].size(); i++)
        {
            int child = adj[parent][i];
            if(!visited[child])
            {
                visited[child] = true;
                que.push(child);
            }

               if(color[parent] == WHITE)
                {
                    if(color[child] == WHITE)
                    {
                       ck = false;
                    }
                    else
                    {
                       color[child] = BLACk;
                    }
                }
                else
                {
					if(color[child] == BLACk)
                    {
                       ck = false;
                    }
                    else
                    {
                       color[child] = WHITE;
                    }
                }
        }
   }
}

int main()
{
    //freopen("in.txt", "r", stdin);
   int n;
   while(cin >> n)
   {
       if(n == 0) return 0;
       int m;
       cin >> m;
       while(m--)
       {
          int u, v;
          cin >> u >> v;
          adj[u].push_back(v);
          adj[v].push_back(u);
       }
       bfs(0);
       if(ck) cout << "BICOLORABLE.\n";
       else cout << "NOT BICOLORABLE.\n";
       for(int i = 0; i <= lim; i++)
       {
           adj[i].clear();
       }
       memset(visited, false, sizeof(visited));
       memset(color, 0, sizeof(color));
       ck = true;
   }
   return 0;
}
