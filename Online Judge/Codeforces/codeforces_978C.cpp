#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll binarySearch(ll arr[], ll n, ll value)
{
   ll low = 1, high = n, mid, ind = 0;

   while(low <= high)
   {
     mid = (low + high) / 2;
     if(arr[mid] <= value)
     {
        ind = mid;
        low = mid + 1;
     }
     else if(arr[mid] > value)
     {
        high = mid - 1;
     }
   }
   return ind;
}

int main()
{
  int n, m;

  scanf("%d%d", &n, &m);
  ll arr[n + 1];
  arr[0] = 0;

  for(int i = 1; i <= n; i++)
  {
    ll num;
    scanf("%lld", &num);
    arr[i] = arr[i - 1] + num;
  }

  while(m--)
  {
    ll value;
    scanf("%lld", &value);

    ll ans = binarySearch(arr, n, value);
    if(arr[ans] < value)ans++;

    ll ans_value = value - arr[ans - 1];
    printf("%lld %lld\n", ans, ans_value);
  }
  return 0;
}
