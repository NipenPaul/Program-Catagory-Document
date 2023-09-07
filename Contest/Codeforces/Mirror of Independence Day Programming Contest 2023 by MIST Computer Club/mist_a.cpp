#include <bits/stdc++.h>
using namespace std;
#define CHECK(x)cout<<(#x)<<" is "<<(x)<<'\n';
#define int long long

void solution(){
  int n; cin >> n;
  std::vector<int> v(n);
  for(int i = 0; i < n; i++){
    cin >> v[i];
  }
  vector<int> cum(n+1);
  for(int i = 0; i < n; i++){
    cum[i+1] = cum[i]+v[i];
  }
  deque<int> que;
  int res = 0;
  for(int i = 0; i < n; i++){
    if(que.empty()){
      que.push_back(i);
    }else if(v[que.front()] <= v[i]){
      //CHECK(que.front());
     //CHECK(i);
      int len = i-que.front();
      if(len > 1){
        int sum = cum[i] - cum[que.front()+1];
        //CHECK(sum);
        res += (((len-1)*v[que.front()]) - sum);
      }
      que.clear();
      que.push_back(i);
    }else{
      que.push_back(i);
    }
  }
  if(que.size() > 1){
    reverse(que.begin(), que.end());
    int j = que.front();
    for(int i = 0; i < que.size(); i++){
     //cout << v[que[i]] << " ";
      //CHECK(j);
     // CHECK(v[j]); CHECK(v[que[i]]);
      int len = j - que[i];
      if(v[j] <= v[que[i]] && j != que[i] && len > 1){
        //CHECK(j);
        int sum = cum[j] - cum[que[i]+1];
        res += (((len-1)*v[j]) - sum);
        j = que[i];
      }else if(v[j] <= v[que[i]] && j != que[i] && len == 1){
        j = que[i];
      }
    }
  }
  cout << res << '\n';
}
int32_t main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  cin >> t;
  while(t--){
    solution();
  }
}