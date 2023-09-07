#include<bits/stdc++.h>

using namespace std;

class Divisible
{
private:
		string ch;
public:
        Divisible(string ch)
        {
           this->ch = ch;
        }
	 int calculation();

};

int Divisible::calculation()
{
    int sum = 0, even = 0, ct0 = 0;
    for(int i = 0; i < ch.size(); i++)
    {
      int tem = ch[i] - '0';
      sum += tem;
      if(!(tem & 1)) even++;
      if(tem == 0) ct0++;
    }

    if((sum % 3 == 0 && ct0 > 0 && even > 1) || (ch.size() == 1 &&          ch[0] == '0'))
		return 1;
	else return 0;
}

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    string ch;
    cin >> ch;
    Divisible di(ch);
    if(di.calculation() == 1) cout << "red" << '\n';
    else cout << "cyan" << '\n';
  }
  return 0;
}
