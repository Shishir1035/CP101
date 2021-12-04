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
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];

		sort(v.begin(),v.end());
		if(v[0]==0)
			for (int i = 0; i < v[n-1]; ++i)
			{
				cout<<i<<" \n"[i==n-1]; 
			}
		else if(v[0] != 0)
			{	
				int temp=0;
				temp=v[n-1] % v[0];
				if(temp==0)
					for (int i = v[0]; i != v[n-1]; i+=v[0])
					{
						cout<<i<<" \n"[i==v[n-1]];
					}
			}
	}
}