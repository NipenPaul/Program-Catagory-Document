#include <bits/stdc++.h>
#define int long long
using namespace std;
void start()
{
    ios::sync_with_stdio(0);cin.tie(0);
    #ifndef ONLINE_JUDGE
       freopen("in.txt", "r", stdin);
    //   freopen("out.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
stack<string> Back;
stack<string> Forword;
int32_t main()
{
    start();
    int t; cin >> t;
    for(int tc = 1; tc <= t; tc++)
    {
       while(!Forword.empty())
        {
            Forword.pop();
        }
        while(!Back.empty())
        {
            Back.pop();
        }
       cout << "Case " << tc << ":\n";
       string ch, browser;
       browser = "http://www.lightoj.com/";
       Back.push(browser);
       while(cin >> ch)
       {
          if(ch == "QUIT") break;
          if(ch == "VISIT")
          {
            cin >> browser;
            cout << browser << endl;
            Back.push(browser);
            while(!Forword.empty())
            {
                Forword.pop();
            }
          }
          else if(ch == "BACK")
          {
            string tem;
            tem = Back.top();
            Back.pop();
            Forword.push(tem);
            if(Back.empty())
            {
                string tem;
                cout << "Ignored" << endl;
                tem = Forword.top();
                Forword.pop();
                Back.push(tem);
            }
            else
            {
                cout << Back.top() << endl;
            }
          }
          else if(ch == "FORWARD")
          {
            if(!Forword.empty()){
                string tem;
                tem = Forword.top();
                cout << tem << endl;
                Forword.pop();
                Back.push(tem);
            }
            else
            {
                cout << "Ignored" << endl;
            }
          }
       }
    }
    return 0;
}
