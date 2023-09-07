#include<iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <math.h>
using namespace std;
int main()
{
    char ch[1000];
    while(gets(ch)){
        int len,i,j,ct=0;
     len=strlen(ch);
      for(i=0;i<len;i++){

            if(ch[i]==32){
                for(j=i-1;j>=ct;j--){
                 printf("%c",ch[j]);
                  }
                ct=i+1;
                 cout<<" ";
            }

            if(ch[i+1]=='\0'){
                i++;
            for(j=i-1;j>=ct;j--){
                printf("%c",ch[j]);
                }
                ct=i+1;
            }
    }
          cout<<endl;
    }
    return 0;
}
