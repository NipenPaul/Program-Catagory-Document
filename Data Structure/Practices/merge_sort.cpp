#include<bits/stdc++.h>

using namespace std;

void Merge(int ar[], int i, int j, int k, int l)
{
    int st = i, en = l;
    //int tem[10], s = 0;
    vector<int> tem;
    while(i <= j && k <= l)
    {
        if(ar[i] < ar[k])
        {
            //tem[s++] = ar[i++];
            tem.push_back(ar[i++]);
        }
        else
        {
            //tem[s++] = ar[k++];
            tem.push_back(ar[k++]);
        }
    }
    while(i <= j)
    {
        //tem[s++] = ar[i++];
        tem.push_back(ar[i++]);
    }
    while(k <= l)
    {
        //tem[s++] = ar[k++];
         tem.push_back(ar[k++]);
    }
    int p = 0;
    for(st; st <= en; st++)
    {
        ar[st] = tem[p++];
    }
}

void merge_sort(int ar[], int low, int high)
{
  if(low < high)
   {
       int mid = (low + high)/2;
       merge_sort(ar, low, mid);
       merge_sort(ar, mid+1, high);
       //cout << low << " " << mid << " " << mid+1 << " " << high << endl;
       Merge(ar, low, mid, mid+1, high);
   }
}

int main()
{
    int ar[] = {0, -5, 1, 7, -7};
    merge_sort(ar, 0, 4);
    for(int i = 0; i < 5; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}
