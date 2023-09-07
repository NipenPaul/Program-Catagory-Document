#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1; i <= 9; i++)
    {
        ll sum = 0;
        while(i)
        {
          sum = sum * 10 + i;
          //cout << sum << endl;
          if(sum <= n)
          {
            ans++;
          }
          else
          {
            break;
          }
        }
    }
    cout << ans << '\n';
  }
  return 0;
}
