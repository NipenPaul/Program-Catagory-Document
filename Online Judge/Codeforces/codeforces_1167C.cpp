#include<bits/stdc++.h>

using namespace std;

const int lim = 1e5 * 5 + 5;

int n, m;
vector<int> adj[lim];
bool visited[lim];
int ans[lim];

void bfs(int src)
{
   vector<int> vec;
   visited[src] = true;
   queue<int> que;
   que.push(src);
   vec.push_back(src);
   while(!que.empty())
   {
      int u = que.front();
      que.pop();
      for(int i = 0; i < adj[u].size(); i++)
      {
        int v = adj[u][i];
        if(!visited[v])
        {
           visited[v] = true;
           que.push(v);
           vec.push_back(v);
        }
      }
   }

   int len = vec.size();
   for(int i = 0; i < len; i++)
   {
        ans[vec[i]] = len;
   }
}

int main()
{
  cin >> n >> m;
  while(m--)
  {
    int k;
    cin >> k;
    vector<int> vec(k);
    for(int i = 0; i < k; i++)
    {
      cin >> vec[i];
    }
    if(k > 1)
    {
       for(int i = 0; i < k - 1; i++)
       {
          adj[vec[i]].push_back(vec[i+1]);
          adj[vec[i+1]].push_back(vec[i]);
       }
    }
  }

//  for(int i = 1; i <= n; i++)
//  {
//    cout << i << ": ";
//    for(int j = 0; j < adj[i].size(); j++)
//    {
//       cout << adj[i][j] << " ";
//    }
//    cout << '\n';
//  }

  for(int i = 1; i <= n; i++)
  {
    if(!visited[i])
    {
      bfs(i);
    }
  }

  for(int i = 1; i <= n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << '\n';
  return 0;
}
