#include <bits/stdc++.h>
#define int long long
using namespace std;
void start()
{
    //ios::sync_with_stdio(0);cin.tie(0);
    #ifndef ONLINE_JUDGE
       freopen("in.txt", "r", stdin);
    //   freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}

int32_t main()
{
   start();
    int t; cin >> t;
    for(int tc = 1; tc <= t; tc++)
    {
      cout << "Case " << tc << ":\n";
      deque<int> de;
      int n, m; cin >> n >> m;
      while(m--)
      {
        string ch;
        cin >> ch;
        if(ch == "pushLeft")
        {
           int num; cin >> num;
           if(n == (int)de.size()) cout << "The queue is full\n";
           else
           {
            de.push_front(num);
            cout << "Pushed in left: " << num << '\n';
           }
        }
        else if(ch == "pushRight")
        {
           int num; cin >> num;
           if(n == (int)de.size()) cout << "The queue is full\n";
           else
           {
            de.push_back(num);
            cout << "Pushed in right: " << num << '\n';
           }
        }
        else if(ch == "popLeft")
        {
          if((int)de.size() == 0) cout << "The queue is empty\n";
          else
          {
            cout << "Popped from left: " << de.front() << '\n';
            de.pop_front();
          }
        }
        else
        {
          if((int)de.size() == 0) cout << "The queue is empty\n";
          else
          {
            cout << "Popped from right: " << de.back() << '\n';
            de.pop_back();
          }
        }
      }
    }
    return 0;
}
