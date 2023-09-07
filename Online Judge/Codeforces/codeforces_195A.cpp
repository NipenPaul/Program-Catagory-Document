#include<bits/stdc++.h>

using namespace std;

int main()
{
  int a, b, c, ans = 0;
  scanf("%d%d%d", &a, &b, &c);

  int tem = a * c;
  int tem2 = tem / b;
  if(tem % b != 0) tem2++;

  printf("%d\n", tem2 - c);

  return 0;
}

