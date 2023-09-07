#include<bits/stdc++.h>

using namespace std;

void in(vector<int> &vec, int n)
{
  for(int i = 0; i < n; i++)
  {
    int tem;
    scanf("%d", &tem);
    vec.push_back(tem);
  }
}

int main()
{
  int n, m;
  scanf("%d%d", &n, &m);

  vector<int> vecn, vecm;
  vector<int>::iterator it;

  in(vecn, n); in(vecm, m);

  sort(vecn.begin(), vecn.end());

  for(int i = 0; i < m; i++)
  {
    it = upper_bound(vecn.begin(), vecn.end(), vecm[i]);
    //cout << it - vecn.begin() << " ";
    printf("%d ", it - vecn.begin());
  }
 // cout << '\n';
  printf("\n");
  return 0;
}
