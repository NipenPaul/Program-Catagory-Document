#include<bits/stdc++.h>

using namespace std;

int main()
{
   //freopen("in.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);
  int n, q;
  scanf("%d", &n);
  vector<int> vec;
  vector<int>::iterator it;
  for(int i = 0; i < n; i++)
  {
    int tem;
    scanf("%d", &tem);
    vec.push_back(tem);
  }
  scanf("%d", &q);
  while(q--)
  {
    int value, low, high;
    scanf("%d", &value);

    it = lower_bound(vec.begin(), vec.end(), value);
    low = it - vec.begin();

    it = upper_bound(vec.begin(), vec.end(), value);
    high = it - vec.begin();

    //cout << low << " " << high << endl;;
    if(low == 0) printf("X ");
    else printf("%d ", vec[low - 1]);
    if(high == n) printf("X\n");
    else printf("%d\n",vec[high]);

  }

  return 0;
}
