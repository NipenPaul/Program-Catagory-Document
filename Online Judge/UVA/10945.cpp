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
#include<iostream>
using namespace std;
int main()
{
   int c=0,i,j,p,t;
   char aray[500];
   char reverse_word[500];
   char tpi[500];
   while(gets(aray)){
   int total=strlen(aray);
   for(i=0;i<total;i++)
   {
     if(aray[i]>=65&&aray[i]<=90||aray[i]>=97&&aray[i]<=122)
     {
        if(aray[i] >= 97 && aray[i] <= 122) {
        aray[i] = 'A' + (aray[i] - 'a');
         }
         tpi[c]=aray[i];
         c++;
     }
   }
   tpi[c] = '\0';
   if (0 == strcmp(tpi,"DONE")) {
    break;
   }
   int n=strlen(tpi);
   for(t = 0, j = n - 1; t < n; t++, j--) {
   reverse_word[t] = tpi[j];
   }
   reverse_word[t] = '\0';
   if (0 == strcmp(reverse_word,tpi))
   {
    printf("You won't be eaten!\n");
   }
   else {
   printf("Uh oh..\n");
   }
   c=0;
   }
   return 0;
}

