#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
int lcas(vector<int>&v, int sz)
{
	int curmax = 0 , maxx = 0;
	for (int i = 0; i < sz; ++i)
	{
		curmax = max(curmax+v[i], v[i]);
		if(curmax > maxx)
			maxx = curmax;
	}
	return maxx;
}
int maxxx(vector<int>&v, int sz)
{
	int curmax = 0, maxx = 0;
	for (int i = 0; i < sz; ++i)
	{
		curmax += v[i];
		if(curmax > maxx)
			maxx = curmax;
	}
	return maxx;
}
int minn(vector<int> &v , int sz)
{
	int ans = 0;
	for (int i = 0; i < sz; ++i)
	{
		if(v[i] < 0)
			ans += v[i];
		else
			break;
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n;
		vector<int>arrn(n);
		for (int i = 0; i < n; ++i)
			cin>>arrn[i];

		cin>>m;
		vector<int>arrm(m);
		for (int i = 0; i < m; ++i)
			cin>>arrm[i];
		int min1 = minn(arrn,n), min2 = minn(arrm,m);
		int ans1 = lcas(arrn,n) + maxxx(arrm,m);
		int ans2 = lcas(arrm,m) + maxxx(arrn,n);

		int x = max(ans1,ans2),y = max(ans1,ans2),z;
		if(x == ans1)
			x = ans1 - min1;
		else if(y == ans2)
			y = ans2 - min2;
		z = max(x,y);
		cout<<max(0,z)<<endl;
	}
}