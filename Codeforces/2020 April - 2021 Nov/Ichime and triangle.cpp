// https://codeforces.com/problemset/problem/935/A
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
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a+b > c)
			cout<<a<<" "<<b<<" "<<c<<endl;
		else
			cout<<b<<" "<<c<<" "<<c<<endl;
	}
}