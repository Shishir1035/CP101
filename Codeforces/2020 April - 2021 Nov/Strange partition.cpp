#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll max=0, min=0;
		for (ll i = 0; i < n; ++i)
		{
			ll a;
			cin>>a;
			max += (a+k-1)/k;
			min += a;
		}
		cout<<(min+k-1)/k<<" "<<max<<endl;
	}
}