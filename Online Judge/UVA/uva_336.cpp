 #include<bits/stdc++.h>
 #define fread freopen("in.txt", "r", stdin)
 #define fwrite freopen("out.txt", "w", stdout)
 #define lim 1001

 using namespace std;

 bool visited[lim];
 map<int, int> ma;
 vector<int> vec[lim];
 int lebel[lim];

 void bfs(int src, int len)
 {
    visited[src] = true;
    queue<int> que;
    que.push(src);

    while(!que.empty())
    {
       int u = que.front();
       que.pop();

       for(int i = 0; i < vec[u].size(); i++)
       {
          int child = vec[u][i];
          if(visited[child] == false)
          {
            lebel[child] = lebel[u] + 1;
            if(lebel[child] <= len){
             que.push(child);
            visited[child] = true;
            }
          }
       }
    }
 }

 int main()
 {
    //fread;
    //fwrite;
    int n, t = 0;
    while(scanf("%d", &n) != EOF && n)
    {

      ma.clear();
      for(int i = 0; i < lim; i++)
      {
        vec[i].clear();
      }
       int id = 1;

       for(int i = 0; i < n; i++)
       {
          int a, b;
          cin >> a >> b;
          if(ma[a] == 0) ma[a] = id++;
          if(ma[b] == 0) ma[b] = id++;
          vec[ma[a]].push_back(ma[b]);
          vec[ma[b]].push_back(ma[a]);
       }

//       for(int j = 1; j < id; j++) {
//        cout << j << ": ";
//       for(int i = 0; i < vec[j].size(); i++) {
//         cout << vec[j][i] << " ";
//         }
//         cout << '\n';
//         }


       int src, len;
       while(scanf("%d%d", &src, &len) != EOF)
       {
          if(src == 0 && len == 0) break;
           t++;
           memset(visited, false, sizeof(visited));
           memset(lebel, 0, sizeof(lebel));
           bfs(ma[src], len);
           int ans = 0;
           for(int i = 1; i < id; i++)
           {
               if(visited[i] == false){
                 ans++;
                 //cout << i << " ";
               }
           }

           printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", t, ans, src, len);
       }
    }
    return 0;
 }
