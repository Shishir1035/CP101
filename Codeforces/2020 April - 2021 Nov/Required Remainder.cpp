// https://codeforces.com/problemset/problem/1374/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y;
		cin>>x>>y>>n;
		if(x>n)
			cout<<0<<endl;
		else
		{
		for (int i = 0; i < x; ++i)
		{
			if(n % x == y)
				break;
			n--;
		}
		cout<<n<<endl;
		}
	}
}