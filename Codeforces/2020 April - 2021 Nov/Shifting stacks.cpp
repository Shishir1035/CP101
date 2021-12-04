#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<ll>v(n);
		for (ll i = 0; i < n; ++i)
		{
			ll a;
			cin>>a;
			v[i]=a;
		}
		ll temp=v[0];
	    v[0]=0;
		for (ll i = 1; i < n; ++i)
		{
			if(v[i]>i)
				temp += v[i]-i, v[i]=i;
			else if(temp+v[i]>=i)
				temp=temp+v[i]-i, v[i]=i;
		}
		ll flag=1;
		for (ll i = 0; i < n-1; ++i)
		{
			if(v[i]<v[i+1])
				continue;
			else
			{
				flag=0;
				break;
			}
		}
		if (flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}