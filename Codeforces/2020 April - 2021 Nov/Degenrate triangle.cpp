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
		sort(v.begin(), v.end());
		int k = -1;
		int temp = v[0] + v[1];
		for (int i = 2; i < n; ++i)
		{
			if(temp <= v[i])
			{
				k = i+1;
				break;
			}
		}
		if(k != -1)
			cout<<"1 2 "<<k<<endl;
		else
			cout<<-1<<endl;
	}
}