#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    set<int, greater<int>> se;
    set<int,greater<int>>::iterator it;
    for(int i = 0; i < n; i++)
    {
      int tem; cin >> tem;
      if(tem % 2 == 0) se.insert(tem);
    }
    int ans = 0;
    while(!se.empty())
    {
       int tem;
       it = se.begin();
       tem = *it;
       tem /= 2;
       se.erase(it);
       if(tem % 2 == 0) se.insert(tem);
       ans++;
    }
    cout << ans << '\n';
    se.clear();
  }
  return 0;
}
