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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>v(n+2,0);
		for (int i = 1; i <= n; ++i)
			cin>>v[i];
		long long ans = 0;
		for (int i = 1; i <= n+1; ++i)
			ans += abs(v[i]-v[i-1]);
		
		for (int i = 1; i <= n; ++i)
			if(v[i] > v[i-1] && v[i] > v[i+1])
				ans -= v[i] - max (v[i+1], v[i-1]);
		cout<<ans<<endl;
	}
}




