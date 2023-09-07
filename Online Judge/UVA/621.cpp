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
  string ph;
  int len,a;
  cin>>a;
  while(a--){
  cin>>ph;
  len=ph.size();
   if(ph=="1"||ph=="4"||ph=="78"){
    printf("+\n");
   }
   else if(ph[len-2]=='3'&&ph[len-1]=='5'){
      printf("-\n");
   }
  else if(ph[len-len]=='9'&&ph[len-1]=='4'){
      printf("*\n");
   }
  else if(ph[len-len]=='1'&&ph[len-(len-1)]=='9'&&ph[len-(len-2)]=='0'){
      printf("?\n");
   }
   }
  return 0;
}


