// https://codeforces.com/problemset/problem/1348/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
ll power ( ll x, ll y)
{
	ll ans = 1;
	while(y--) ans = ans * x;
	return ans;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll maxx = power(2,n);
		for (int i = 1; i < n/2; ++i)
			maxx += power(2,i);	
		for (int i = n/2; i < n; ++i)
			maxx -= power(2,i);
		cout<<maxx<<endl;
	}
}