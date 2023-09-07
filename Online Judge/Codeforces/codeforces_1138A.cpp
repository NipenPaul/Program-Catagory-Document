#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  vector<int> vec;
  int ct = 1;
  for(int i = 0; i < n - 1; i++)
  {
    if(arr[i] == arr[i + 1])
    {
       ct++;
    }
    else
    {
      vec.push_back(ct);
      ct = 1;
    }
  }
  vec.push_back(ct);

  int len = vec.size() - 1, mx = INT_MIN, mn;
  for(int i = 0; i < len; i++)
  {
    mn = min(vec[i], vec[i+1]);
    mx = max(mx, mn);
  }
  printf("%d\n", mx * 2);
  return 0;
}
