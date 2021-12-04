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
		ll a,b,n;
		cin>>a>>b>>n;
		vector<ll>atk(n),hlth(n);
		for(ll i=0; i<n; i++)
			cin>>atk[i];
		for(ll i=0; i<n; i++)
			cin>>hlth[i];
		int64_t dmg=0;
		for (ll i = 0; i < n; ++i)
		{
			dmg += ceil((double)hlth[i]/a) * atk[i];
		}
		int flag = true;
		for (int i = 0; i < n; ++i)
		if (b - (dmg - atk[i]) > 0)
		{
			cout<<"YES"<<endl;
			flag=false;
			break;
		}
		if(flag == false)
			continue;
		else
			cout<<"NO"<<endl;
	}
}