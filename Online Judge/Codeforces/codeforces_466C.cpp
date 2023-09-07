#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  ll arr[n], sum = 0;
  for(int i = 0; i < n; i++)
  {
    scanf("%lld", &arr[i]);
    sum += arr[i];
  }
  if(sum % 3 != 0) printf("0\n");
  else
  {

    ll div1 = sum / 3;
    ll div2 = div1 * 2;
	sum = 0;
    ll ans = 0, ct = 0;

    for(int i = 0; i < n -1; i++)
    {
       sum += arr[i];
       if(sum == div2)
        ans += ct;
       if(sum == div1)ct++;
    }
    printf("%lld\n", ans);
  }

  return 0;
}
