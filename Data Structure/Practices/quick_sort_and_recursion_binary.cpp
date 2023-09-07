#include<bits/stdc++.h>

using namespace std;
const int64_t INF = 1e18 + 7;

int partion(int ar[], int low, int high)
{
    int pivot = ar[low];
    int i = low, j = high;
    while(i < j)
    {
        do
        {
            i++;
        }while(ar[i] <= pivot);
        do
        {
            j--;
        }while(ar[j] > pivot);

        if(i < j)
        {
            swap(ar[i], ar[j]);
        }
    }
    swap(ar[low], ar[j]);
    return j;
}

void quick_sort(int ar[], int low, int high)
{
    if(low < high)
    {
        int pivot = partion(ar, low, high);
        quick_sort(ar, low, pivot);
        quick_sort(ar, pivot+1, high);
    }
}

int RbinarySearch(int ar[], int low, int high, int item)
{
    if(low == high)
    {
        if(ar[low] == item)
            return low+1;
        else
            return 0;
    }
    int mid = (low + high) / 2;
    if(ar[mid] == item)
    {
        return mid + 1;
    }
    else if(ar[mid] > item)
    {
        RbinarySearch(ar, low, mid - 1, item);
    }
    else
    {
        RbinarySearch(ar, mid + 1, high, item);
    }
}

int32_t main()
{
    int32_t ar[] = {7, 2, -5, 0,0, 4, 0, 45};
    quick_sort(ar, 0, 8);
    for(auto x : ar)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << RbinarySearch(ar, 0, 8, 0) << endl;
    return 0;
}
