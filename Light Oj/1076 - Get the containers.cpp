#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int n,m;
bool possible(vector<int>&v, int limit)
{
	int total = 0,cnt = 1;

	for (int i = 0; i < v.size(); ++i)
	{
		if(v[i] + total <= limit) 
			total += v[i];
		else
			cnt++,total = v[i];
	}
	if(cnt>m)
		return false;
	return true;
}
int BS(vector<int>&v, int high, int low)
{
	int ans;
	int mid = (low + high) / 2;
	while(low<=high)
	{
		if(possible(v,mid))
		{
			ans = mid;
			high = mid - 1;
		}	 
		else
			low = mid + 1;

		mid = (low + high)/2;
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	for (int cn = 1; cn <= t; ++cn)
	{
		cin>>n>>m;
		std::vector<int> v(n);
		int total = 0, low=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
			total += v[i];
			if(v[i]>low) low = v[i];
		}	
		cout<<"Case "<<cn<<": "<<BS(v,total,low)<<endl;
	}
}