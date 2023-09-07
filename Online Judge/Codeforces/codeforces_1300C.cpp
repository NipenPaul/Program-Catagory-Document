#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int ar[n];
  for(int i = 0; i < n; i++)
  {
    cin >> ar[i];
  }
  int ct = 0, ind;
  for(int i = 30; i >= 0; i--)
  {
    ct = 0;
    for(int j = 0; j < n; j++)
    {
        if((ar[j] >> i) & 1)
        {
          ct++;
          ind = j;
        }
    }
    if(ct == 1)break;
  }
  if(ct)
  {
    swap(ar[0], ar[ind]);
  }
  for(int i = 0; i < n; i++)
  {
    cout << ar[i] << ' ';
  }
  cout << '\n';
  return 0;
}
