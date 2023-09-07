#include <bits/stdc++.h>
#define CHECK(x)cout<<(#x)<<" = "<<(x)<<'\n';
#define int long long
#define endl '\n'
using namespace std;

int countAlternatingSegments(const vector<int>& arr) {
    int count = 0;
    bool increasing = arr[1] > arr[0];

    for (int i = 2; i < arr.size(); i++) {
        if ((arr[i] > arr[i - 1] && !increasing) || (arr[i] < arr[i - 1] && increasing)) {
            count++;
            increasing = !increasing;
        }
    }

    return count;
}

void solution(){
  int n; cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  int cnt = 1;
  for(int i = 0; i < n; i++){
    if(i+1 < n && v[i] < v[i+1]){
      bool ok = false;
      while(i+1 < n && v[i] <= v[i+1]){
        i++;
        ok = true;
      }
      cnt++;
      if(ok) i--;
    }else if(i+1 < n && v[i] > v[i+1]){
      bool ok = false;
      while(i+1 < n && v[i] >= v[i+1]){
        i++;
        ok = true;
      }
      if(ok)i--;
      cnt++;
    }
  }
  cout << cnt << endl;
}
int32_t main(){
  ios::sync_with_stdio(false);cin.tie(nullptr);
  int t = 1; cin >> t;
  while(t--){
    solution();
  }
  return 0;
}