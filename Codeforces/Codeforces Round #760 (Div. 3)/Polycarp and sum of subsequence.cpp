#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int vec[8];
		for (int i = 0; i < 7; ++i)
		{
			int a;
			cin>>a;
			vec[i]=a;
		}
		cout<<vec[6]-vec[5] <<" "<<vec[6]-vec[4]<<" "<<vec[5]+vec[4]-vec[6]<<endl;
	}
}