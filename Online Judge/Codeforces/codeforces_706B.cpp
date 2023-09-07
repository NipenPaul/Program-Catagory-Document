#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int n, int value)
{
   int low = 0, high = n - 1, mid, ind = 0;

   while(low <= high)
   {
     mid = (low + high) / 2;
     if(arr[mid] <= value)
     {
        ind = mid + 1;
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
  int n;
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  sort(arr, arr+n);
  int q;
  scanf("%d", &q);
  while(q--)
  {
    int value;
    scanf("%d", &value);
    printf("%d\n",binarySearch(arr, n, value));
  }
  return 0;
}
