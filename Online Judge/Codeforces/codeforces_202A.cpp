#include<bits/stdc++.h>

using namespace std;

int main()
{
  string ch;
  cin >> ch;
  int arr[26] = {0};
  for(int i = 0; i < ch.size(); i++)
  {
    arr[ch[i] - 'a']++;
  }

  for(int i = 25; i >= 0; i--)
  {
    if(arr[i] > 0)
    {
      for(int j = 0; j < arr[i]; j++)
      {
        printf("%c",i + 'a');
      }
      printf("\n");
      return 0;
    }
  }
  return 0;
}

