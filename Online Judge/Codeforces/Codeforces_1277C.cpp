#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t; cin >> t;
  while(t--)
  {
    string ch; cin >> ch;
    int len = ch.size();
    vector <int> vec;
    if(len > 2)
    {
		for(int i = 0; i < len; i++)
		{
          if(ch[i] == 'o')
          {
            if(ch[i+1] == 'n' && ch[i+2] == 'e' && len -1 >= i+2)
            {
                if(ch[i-1] == 'w' && ch[i-2] == 't'&& 0 <= i - 2)
                {
                  vec.push_back(i);
                }
                else
                {
                  vec.push_back(i+1);
                }
            }
            else if(ch[i-1] == 'w'&&ch[i-2] == 't' && 0 <= i - 2)
            {
               vec.push_back(i-1);
            }
          }
		}
		if(vec.size() == 0)
		{
		   cout << "0\n\n";
		}
		else
		{
		  cout << vec.size() << '\n';
		  for(int i = 0; i < vec.size(); i++)
		  {
		    cout << vec[i] + 1 << " ";
		  }
		  cout << '\n';
		}
    }
    else
    {
      cout << 0 << '\n' << '\n';
    }
  }
  return 0;
}
