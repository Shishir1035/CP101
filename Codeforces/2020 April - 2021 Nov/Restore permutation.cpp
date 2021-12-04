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
		int n,a;
		cin>>n;
		vector<int>v1(n+1,100),v2(2*n+1,0);
		for (int i = 1; i <= 2*n; ++i)
		{
			cin>>a;
			v1[a] = min(v1[a],i);
		}	
		for (int i = 1; i <= n; ++i)
			v2[v1[i]] = i;
		for (int i = 1; i <= 2*n; ++i)
		{
			if(v2[i])
				cout<<v2[i]<<" \n"[i== 2*n];
			else if(i==2*n)
				cout<<endl;
		}
	}
}