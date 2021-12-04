#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		std::vector<ll> v(n);
		for (ll i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		v.insert(v.begin(),0);
		v.insert(v.end(),0);
		// printvec(v,v.size());
		ll pos=1, maxx=v[1];
		for (ll i = 2; i <= n; ++i)
		{
			if(v[i]>maxx)
				maxx= v[i],pos=i;
		}
		if (v[pos+1] < v[pos-1])
		{
			cout<<maxx*v[pos-1]<<endl;
		}
		else
			cout<<maxx*v[pos+1]<<endl;
	}
}