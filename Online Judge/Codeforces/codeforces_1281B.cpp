#include<bits/stdc++.h>
#define fread freopen("in.txt","r",stdin)
#define fwrite freopen("out.txt","w",stdout)
#define Mx 100005
#define ll long long

using namespace std;

void in(int arr[], int n)
{
  for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
}

void out(int arr[], int n)
{
  for(int i = 0; i < n; i++) printf("%d ",arr[i]);
}

 int main()
 {

    //fread;
    //fwrite;
    int t; scanf("%d", &t);
    while(t--)
    {
       string s, c;
       cin >> s >> c;
       int lens = s.size();
       int lenc = c.size();
		bool ok = false;
       for(int i = 0; i < lenc; i++)
       {
          if(c[i] > s[i])
          {
            ok = true;
            break;
          }
          else if(c[i] < s[i] && i + 1 < lenc)
          {
            for(int j = i + 1; j < lens; j++)
            {
                 if(c[i] > s[j])
                 {
                    swap(s[i], s[j]);
                    ok = true;
                    i = lenc;
                    break;
                 }
            }
            i = lenc;
          }
       }
       bool ck = false;
       if(s == c) ck = true;

       if(ok == false && ck == false)
       {
         int ct = 0;
         for(int i = 0; i < lenc; i++)
         {
            if(c[i] == s[i]) ct++;
         }
         if(ct == lenc)
         {
           for(int i = 0; i < lenc; i++)
           {
             for(int j = 0; j< lens; j++)
             {
                if(c[i] > s[j] && i != j)
                 {
                    swap(s[i], s[j]);
                    ok = true;
                    i = lenc;
                    break;
                 }
			 }
		   }
         }
       }
       else if(s == c)
       {   int index = -1;
          for(int i = 0; i < lenc; i++)
          {
            int tem = c[i] - 'A';
            if(index < tem)
            {
              index = tem;
            }
          }
          index = index - 25;
		 for(int i = index + 1; i < lens; i++)
		 {
		        if(c[index] > s[i])
                 {
                    swap(s[index], s[i]);
                    ok = true;
                    break;
                 }
		 }
       }

       if(ok) cout << s;
       else cout << "---";

       printf("\n");
    }
    return 0;
 }

