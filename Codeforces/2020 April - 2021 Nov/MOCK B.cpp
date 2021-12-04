#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	for (int j = 1; j <= t; ++j)
	{
		ll n,k,i;
		cin>>k;
		ll maxx = 0, minn = 9000000000000000000;
		for(i = 0; i < k; ++i)
		{
			ll a;
			cin>>a;
			maxx=max(maxx,a);
			minn=min(minn,a);
		}
			cout<<"Case "<<j<<": "<<maxx*minn<<endl;
	}
}