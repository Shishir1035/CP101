#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
int lb(vector<int>&v, int n)
{
	int index = -1;
	int st = 0, en = v.size();
	int mid = (st + en) / 2;
	while(st<=en)
	{
		if(v[mid] >= n)
		{
			index = mid;
			en = mid - 1;
		}	 
		else if(v[mid]<n)
			st = mid + 1;

		mid = (st + en)/2;
	}
	return index;
}
int ub(vector<int>&v, int n)
{
	int index = v.size();
	int st = 0, en = v.size();
	int mid = (st + en) / 2;
	while(st<=en)
	{
		if(v[mid] > n)
		{
			index = mid;
			en = mid - 1;
		}	 
		else if(v[mid]==n)
			st = mid+1;

		else if(v[mid] < n)
			st = mid + 1;

		mid = (st + en)/2;
	}
	return index;
}
int main()
{
	int t;
	cin>>t;
	for (int cn = 1; cn <= t; ++cn)
	{
		int n, q;
		cin>>n>>q;
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];

		cout<<"Case "<<cn<<":"<<endl;
		for (int i = 0; i < q; ++i)
		{
			int a,b;
			cin>>a>>b;
			cout<<ub(v,b)-lb(v,a)<<endl;
		}
	}
}