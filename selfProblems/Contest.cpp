#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define Faster ios::sync_with_stdio(false);cin.tie(nullptr);
#define CHECK(x) cout << (#x) << " is " << (x) << endl;

using namespace std;

const int N = (int)2e5+2;

void solution(int tc){
	int n; cin >> n;
	std::vector<int> v(n);
	for(auto &x: v) cin >> x;
}
int main(int argc, char const *argv[]){
	Faster;
	int tc = 1; 
	cin >> tc;
	for(int i = 1; i <= tc; i++){
		solution(i);
	}
    return 0;
}

#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'

using namespace std;

int main(int argc, char const *argv[]){
	int tc; scanf("%d", &tc);
	while(tc--){
	}
    return 0;
}

#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'

using namespace std;

const int N = (int)2e5+2;
char str[N];

int main(int argc, char const *argv[])
{
	int tc; scanf("%d", &tc);
	while(tc--)
	{
		int n; scanf("%d", &n);
		scanf("%s[^\n]", str);
		string ch(str);
		printf("%s\n", str);
		//printf("%s\n", ch.c_str());
		for(int i = 0; i < ch.size(); i++)
		{
			printf("%c",ch[i]);
		}

	}
    return 0;
}


#include <bits/stdc++.h>
#define CHECK(x) cout << (#x) << " is " << (x) << endl;
#define ll long long int

using namespace std;

int main(int argc, char const *argv[])
{
    return 0;
} 

	int n; cin >> n;
		std::vector<int> v(n);
		for(auto &x: v) cin >> x;
		for(auto x: v) cout << x << " ";


#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'

using namespace std;

int main(int argc, char const *argv[])
{
	int tc; scanf("%d", &tc);
	int tt = 1;
	while(tc--)
	{
		print("Case %d: %d",tt++, ans);
	}
    return 0;
}

#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'

using namespace std;

int main(int argc, char const *argv[])
{
	int tc; scanf("%d", &tc);
	while(tc--)
	{
		int n; scanf("%d", &n);
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &v[i]);
		}	
	}
    return 0;
}

#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(int argc, char const *argv[])
{
	int n; scanf("%d", &n);
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &v[i]);
	}	
    return 0;
}

#define ll long long
#define LIM (int)1e6+2

long long n;
scanf("%lld", &n);

printf("%lld\n", n);

		int n; scanf("%d", &n);
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &v[i]);
		}

int n; scanf("%d", &n);
std::vector<long long> v(n);
for (int i = 0; i < n; ++i)
{
	scanf("%lld", &v[i]);
}


for (int i = 0; i < n; ++i)
{
	printf("%d ", v[i]);
}
printf("\n");

puts(k == calK ? "YES": "NO");

/** Policy-based data structures
  order_of_key(n); return n data position
  find_by_order(n); return n index data
 */ 
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
indexed_set s;


s.insert(2);
s.insert(3);
s.insert(7);
s.insert(9);
auto x = s.find_by_order(2);
cout << *x << "\n"; // 7
cout << s.order_of_key(7) << "\n"; // 2
cout << s.order_of_key(6) << "\n"; // 2
cout << s.order_of_key(8) << "\n"; // 3

map <int, int> ma;
for (auto &[key, val] : ma) rem_l += val;

// 8 cell visit..
int fx[] = {-1,-1,-1,0,1,1,1,0};
int fy[] = {-1,0,1,1,1,0,-1,-1};


1,1 1,2 1,3
2,1 2,2 2,3
3,1 3,2 3,3

// 4 cell visit..
int fx[] = {-1,1,0,0};
int fy[] = {0,0,-1,1};


1,1 1,2 1,3
2,1 2,2 2,3
3,1 3,2 3,3

 // Creates a min heap
 priority_queue <int, vector<int>, greater<int> > pq;

Meeting ID: 66596241810
Password: 202195

https://toph.co/contests/training/3ncwewt




import java.io.*;
import java.util.*;

public class first
{
	public static void main(String[] args) {
		CheckIO();
		Scanner sc = new Scanner(System.in);
	}
	public static void CheckIO()
	{
		try
		{
			System.setIn(new FileInputStream("input.txt"));
			System.setOut(new PrintStream(new FileOutputStream("output.txt")));
		}
		catch(Exception e)
		{
			System.err.println("Error");
		}
	}
}


def CheckIO():
	import sys
	sys.stdin = open('input.txt', 'r')
	sys.stdout = open('output.txt', 'w')

#Main Function
CheckIO();
n = int(input())
print(n)



#include <bits/stdc++.h>
#define ll long long int

void CheckIO();
using namespace std;


int main(int argc, char const *argv[])
{
	CheckIO();
	int tc; scanf("%d", &tc);
	while(tc--)
	{
		
	}
    return 0;
}
void CheckIO()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

// faster
ios::sync_with_stdio(false);
cin.tie(nullptr);