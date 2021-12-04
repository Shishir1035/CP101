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
		vector<int> v(4);
		for (int i = 0; i < 4; ++i)
			cin>>v[i];
		int p1=max(v[0],v[1]), p2=max(v[2],v[3]);
		sort(v.begin(),v.end());
		if(p1>p2)
			swap(p1,p2);
		if(p1==v[2] && p2==v[3])
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}