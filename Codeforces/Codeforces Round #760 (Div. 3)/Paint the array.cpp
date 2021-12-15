#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
void solve()
{
	int n;
	cin>>n;
	std::vector<ll> v(n);
	for (int i = 0; i < n; ++i)
		cin>>v[i];

	ll ans1 = v[0];

	for(int i=0; i<n; i+=2)
		ans1= __gcd(ans1, v[i]);

	bool flag = true;
	for (int i = 1; i < n; i+=2)
		if(!(v[i]%ans1))
		{
			flag = false;
			break;
		}
	
	if(flag)
	{
		cout<<ans1<<endl;
		return;
	}

	flag = true;
	ans1=v[1];
	for(int i=1; i<n; i+=2)
		ans1= __gcd(ans1, v[i]);

	for (int i = 0; i < n; i+=2)
		if(!(v[i]%ans1))
		{
			flag = false;
			break;
		}
	if(flag)
	{
		cout<<ans1<<endl;
		return;
	}
	cout<<0<<endl;

}
int main()
{
	int t;
	cin>>t;
	for (int cn = 0; cn < t; ++cn)
	{
		solve();
	}
	return 0;
}