#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define PI acos(-1.0)
#define ll long long

using namespace std;

const int lim = 26;

vector<int> adj[lim];
bool visited[lim];

void dfs(int src)
{
  visited[src] = true;
  char c = src + 'a';
  cout << c;
  for(int i = 0; i < adj[src].size(); i++)
  {
    int v = adj[src][i];
    if(!visited[v])
    {
      dfs(v);
    }
  }
}

 int main()
 {
    //fread;
    //fwrite;
    int t; scanf("%d", &t);
    while(t--)
    {
        memset(visited, false, sizeof(visited));
        for(int i = 0; i < lim; i++)
        {
          adj[i].clear();
        }
        string ch;
        bool ck;
        cin >> ch;
        if(ch.size() == 1)
        {
           cout << "YES\n";
           for(int i = 0; i < 26; i++)
           {
             char c = i + 'a';
                cout << c;
           }
           cout << '\n';
           continue;
        }
        for(int i = 0; i < ch.size() - 1; i++)
        {
            int u = ch[i] - 'a';
            int v = ch[i+1] - 'a';

            ck = true;
            for(int j = 0; j < adj[u].size(); j++)
            {
               if(adj[u][j] == v) ck = false;
            }
            if(ck)adj[u].push_back(v);

            ck = true;
            for(int j = 0; j < adj[v].size(); j++)
            {
               if(adj[v][j] == u) ck = false;
            }
            if(ck)adj[v].push_back(u);
        }

        ck = false;
        for(int i = 0; i < 26; i++)
        {
          if(adj[i].size() > 2)
          {
            ck = true;
            break;
          }
        }
        if(ck)
        {
          cout << "NO\n";continue;
        }

        int start = -1;
        for(int i = 0; i < 26; i++)
        {
          if(adj[i].size() == 1)
          {
            start = i;
          }
        }

        if(start == -1)
        {
          cout << "NO\n";continue;
        }
        cout << "YES\n";
        dfs(start);

        for(int i = 0; i < 26; i++)
        {
           if(!visited[i])
           {
             char c = i + 'a';
             cout << c;
           }
        }
        cout << '\n';

//        for(int i = 0; i < 6; i++)
//        {
//          cout << i << ": ";
//          for(int j = 0; j < adj[i].size(); j++)
//          {
//            cout << adj[i][j] << " ";
//          }
//          cout << '\n';
//        }
    }
    return 0;
 }
