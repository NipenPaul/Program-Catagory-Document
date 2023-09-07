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
       string ch;
       cin >> ch;
       int len = ch.size();
         int i = len - 1;
          if(ch[i] == 'o' && ch[i - 1] == 'p')
          {
            printf("FILIPINO");
          }
          else if((ch[i] == 'u' && ch[i - 1] == 's' && ch[i - 2] == 'e' && ch[i - 3] == 'd') || (ch[i] == 'u' && ch[i - 1] == 's' && ch[i - 2] == 'a' && ch[i - 3] == 'm'))
          {
           printf("JAPANESE");
          }
          else if(ch[i] == 'a' && ch[i - 1] == 'd' && ch[i - 2] == 'i' && ch[i - 3] == 'n' && ch[i - 4] == 'm')
          {
           printf("KOREAN");
          }

       printf("\n");
    }
    return 0;
 }
