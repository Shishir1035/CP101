#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
void cumsum(vector<int>&arr, int m)
{
	for (int i = 1; i < m; ++i)
		arr[i] = arr[i] + arr[i-1];
	return;
}
int main()
{
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		int m;
		cin>>m;
		vector<int>v1(m),v2(m);
		for (int i = 0; i < m; ++i)
			cin>>v1[i];
		for (int i = 0; i < m; ++i)
			cin>>v2[i];

		cumsum(v1,m);cumsum(v2,m);
		int temp,ans = INT_MAX;
		for (int i = 0; i < m; ++i)
		{
			if(i==0)
				temp = v1[m-1]-v1[i];
			else
				temp = max(v1[m-1] - v1[i], v2[i-1]);

			ans = min(ans,temp);
		}
		cout<<ans<<endl;
	}
}