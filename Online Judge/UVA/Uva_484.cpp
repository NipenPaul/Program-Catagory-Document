#include<bits/stdc++.h>

using namespace std;

int main()
{
  //freopen("in.txt","r", stdin);
  //freopen("out.txt","w", stdout);
  int n;
  vector <int> vec;
  map <int, int> ma;
  while(scanf("%d",&n) != EOF)
  {
    ma[n]++;
    if(ma[n] == 1)vec.push_back(n);
  }

  for(auto it = vec.begin(); it != vec.end(); ++it)
  {
    cout << *it << " " << ma[*it] << endl;
  }

//  for(auto it = ma.begin(); it != ma.end(); ++it)
//  {
//    cout << it->first << " " << it->second << endl;
//  }
  return 0;
}
