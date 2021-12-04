// https://codeforces.com/problemset/problem/1353/A
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
		ll n,m;
		cin>>n>>m;
		if(n==2 && m==2)
			cout<<2<<endl;
		else if(n== 3 && m==2)
			cout<<4<<endl;
		else if(n==1)
			cout<<0<<endl;
		else if(n == m)
			cout<<2*n<<endl;
		else
			cout<<m<<endl;
	}
}