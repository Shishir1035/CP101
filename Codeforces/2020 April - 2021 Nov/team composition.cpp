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
		long long a,b;
		cin>>a>>b;
		long long maxx = max(a,b);
		long long minn = min(a,b);
		long long ans = 0;

		if(maxx - minn >= 2)
		{
			long long temp = (maxx-minn)/2;
			long long temp1= minn;
			long long res = min(temp,temp1);
			maxx -= res*3;
			minn -= res;
			ans+=res;
		}	
		long long res = min(maxx/2,minn/2);
		maxx -= res*2;
		minn -= res*2;
		ans+= res;

		print(ans);
	}
}