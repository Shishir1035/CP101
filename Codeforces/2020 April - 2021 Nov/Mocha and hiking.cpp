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
		int n,flag = -1;
		cin>>n;
		vector<int>v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];
		if(v[0] == 1)
		{
			cout<<n+1<< " ";
			for (int i = 0; i < n; ++i)
				cout<<i+1<<" \n"[i==n-1];
		}
		else if(v[n-1] == 0)
		{
			for (int i = 0; i <= n; ++i)
				cout<<i+1<<" \n"[i==n];
		}
		else
		{
			for (int i = 0; i < n-1; ++i)
				if(v[i] == 0 && v[i+1] ==1)
				{
					flag = i;
					break;
				}
			if(flag == -1) 
				cout<<-1<<endl;
			else
			{
				++flag;
				for (int i = 1; i <= flag; ++i)
					cout<<i<<" ";
				cout<<n+1<<" ";
				for (int i = flag+1; i <= n; ++i)
					cout<<i<<" \n"[i==n];
			}
		}
	}
}