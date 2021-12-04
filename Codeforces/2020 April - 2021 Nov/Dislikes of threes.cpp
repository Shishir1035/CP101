#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
int sod(int a)
{
	int SOD=0;
	while(a)
	{
		SOD += a%10;
		a/=10;
	}
	return SOD;
}
int main()
{
	int a=1,sz = 0, t;
	cin>>t;
	vector<int>v;
	
	while(sz!=1000)
	{
		if(a%10 == 3 || sod(a)%3 == 0);
		else 
			{
				v.push_back(a);
				sz++;
			}
			a++;
	}
	while(t--)
	{
		int n;
		cin>>n;
		cout<<v[n-1]<<endl;
	}
}