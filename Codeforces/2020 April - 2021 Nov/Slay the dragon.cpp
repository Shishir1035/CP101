#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
	fastIO;
	ll x  = 0,n,m,herosum = 0;
	cin>>n;
	vector<ll> vn(n);
	for (ll i = 0; i < n; ++i)
	{
		cin>>vn[i];
		herosum += vn[i];
	}
	sort(vn.begin() , vn.end());

	cin>>m;
	for (ll i = 0; i < m; ++i)	
	{
		ll a,b;
		cin>>a>>b;
		ll cost = 0;
		int k = lower_bound(vn.begin(), vn.end(), a) - vn.begin();
		if(k == n)
				cost += max(0LL,a-vn[n-1]) + max(0LL,b- herosum + vn[n-1]);		
		else if (k == 0)
				cost += max(0LL,b-herosum + vn[0]);
		else
			cost += min(max(0LL,b - herosum + vn[k]), 
				max(0LL, a-vn[k-1]) + max(0LL, b-herosum+vn[k-1]));
		cout<<cost<<endl;
	}
}
