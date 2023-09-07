#include <bits/stdc++.h>

using namespace std;

const int lim = 1e3 + 5;

map<string, int> ma;
vector<int> adj[lim];
bool visited[lim];
int cost[lim];
int pa[lim];

void bfs(int src)
{
	visited[src] = true;
	queue<int> que;
	que.push(src);
	pa[src] = src;

	while(!que.empty())
	{
	    int u = que.front();
        que.pop();
        for(int i = 0; i < adj[u].size(); i++)
        {
           int v = adj[u][i];
           if(!visited[v] && !cost[v])
           {
              visited[v] = true;
              que.push(v);
              cost[v] = cost[u] + 1;
              pa[v] = u;
           }
        }
	}
}

int main()
{
   // freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
	int n;
	bool ck = false;
	while(scanf("%d", &n) != EOF)
	{
	    if(ck)
			printf("\n");
		ck = true;
	    string ch1, ch2;
	    vector<string> pav;
		int k = 1;
		while(n--)
		{
            cin >> ch1 >> ch2;
            if(ma[ch1] == 0)
            {
				ma[ch1] = k++;
				pav.push_back(ch1);
            }
            if(ma[ch2] == 0)
            {
				ma[ch2] = k++;
				pav.push_back(ch2);
            }

            adj[ma[ch1]].push_back(ma[ch2]);
            adj[ma[ch2]].push_back(ma[ch1]);

		}
		cin >> ch1 >> ch2;
		int s, d;
		s = ma[ch1];
		d = ma[ch2];
		//cout << d << endl << s << endl;
		bfs(s);
		if(visited[d] && d)
		{
		   vector<int> ans;
		   ans.push_back(d);
		   int now = d;
		 //  cout << d << '\n';
           while(now != s)
           {
             now = pa[now];
             ans.push_back(now);
           }
           reverse(ans.begin(), ans.end());

           for(int i = 0; i < ans.size()-1; i++)
           {
              cout << pav[ans[i]-1] << " " << pav[ans[i+1]-1] << '\n';
             // cout << ans[i] << " ";
           }
           ans.clear();
		}
		else
		{
			printf("No route\n");
		}

//		for(int i = 0; i < pav.size(); i++)
//		{
//			cout << pav[i] << " ";
//		}

		ma.clear();
		memset(visited, false, sizeof(visited));
		memset(pa, 0, sizeof(pa));
		memset(cost, 0, sizeof(cost));
		for(int i = 0; i < lim; i++) adj[i].clear();
		pav.clear();
	}
  return 0;
}
