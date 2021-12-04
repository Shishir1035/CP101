#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
bool check(vector<int>&vec, int n, int d)
{
	bool flag = true;
	for (int i = 0; i < n; ++i)
		if(vec[i] > d)
		{
			flag = false;
			break;
		}
	return flag;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];
		sort(v.begin(), v.end());
		if(v[0]+v[1] <= d || check(v,n,d))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}