#include<bits/stdc++.h>

using namespace std;

int main()
{
  string ch;
  cin >> ch;
  int len = ch.size(), ct = 0;
  int open[len], close[len];

  for(int i = 0; i < len; i++)
  {
    if(ch[i] == '{') ct++;
    open[i] = ct;
  }
   ct = 0;
  for(int i = len - 1; i >= 0; i--)
  {
    if(ch[i] == '}') ct++;
    close[i] = ct;
  }
  int ans = 0;
  for(int i = 0; i < len; i++)
  {
	 int tem = min(open[i], close[i]);
	 ans = max(tem, ans);
  }

  cout << ans << '\n';
  return 0;
}

