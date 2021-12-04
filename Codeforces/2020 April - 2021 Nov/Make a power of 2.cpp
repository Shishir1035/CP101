#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
ll arr[65];
void initial()
{
	ll a = 1;
	for (int i = 0; i < 64; ++i)
	{
		arr[i] = a;
		a*=2;
	}
	return;
}

int main()
{
	initial();
	int t;
	cin>>t;
	while(t--)
	{
		ll n,subans,ans=1e18;
		cin>>n;
		for (int i = 0; i < 64; ++i)
		{
			string powele = to_string(arr[i]);
			string nn = to_string(n);
			int elesz = powele.size();
			int nsz = nn.size();

			int cnt = 0,k=0;
			for (int j = 0; j < nsz; ++j)
			{
				if(powele[k] == nn[j]) 
					k++,cnt++;
			}
			subans = elesz - cnt +  nsz - cnt;
			ans = min(ans,subans);		
			cnt = 0;
		}
		cout<<ans<<endl;
	}
}

