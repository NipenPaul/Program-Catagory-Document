#include<bits/stdc++.h>

using namespace std;

set<int> se;

int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    int num; cin >> num;
    se.insert(num);
  }
  int lens = se.size();
  if(lens == 1)
  {
    cout << "0\n";
  }
  else if(lens == 2)
  {
    vector<int> vec;
    for(auto it : se)
    {
       vec.push_back(it);
    }
    int dif = vec[1] - vec[0];
    if(dif % 2 == 0)
    {
		cout << dif / 2 << '\n';
	}
	else
	{
	  cout << dif << '\n';
	}
  }
  else if(lens == 3)
  {
    vector<int> vec;
    for(auto it : se)
    {
       vec.push_back(it);
    }
    if(vec[2] - vec[1] == vec[1] - vec[0])
    {
        cout << vec[1] - vec[0] << "\n";
    }
    else
    {
      cout << "-1\n";
    }
  }
  else
  {
      cout << "-1\n";
  }
  return 0;
}
