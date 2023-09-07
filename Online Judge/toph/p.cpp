#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
   int n, ct = 0;
   cin >> n;
   long double avg = 0.0;
   vector<pair<double, double>> vec;
   for(int i = 0; i < n; i++)
   {
      double m, s; cin >> m >> s;
      avg += m;
      vec.push_back({m, s});
   }

   avg /= n;

  for(int i = 0; i < n; i++)
   {
      //cout << vec[i].first << " ";
     // cout << vec[i].second << '\n';
     double per = (vec[i].first * 100) / vec[i].second;
     if(vec[i].first >= 150 && avg <= vec[i].first && per >= 70.00)
     {
        ct++;
     }
   }

   cout << ct << '\n';
  return 0;
}
