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
	fastIO;
	int t;
	cin>>t;
	while(t--)
	{
		int maxxp, minnp, arr[3], m;
		cin>>arr[0]>>arr[1]>>arr[2]>>m;
		sort(arr,arr+3);
		maxxp = (arr[0]-1 < 0? 0 : arr[0]-1) + (arr[1]-1 < 0? 0 : arr[1]-1) + (arr[2]-1 < 0? 0 : arr[2]-1); 
		minnp = (arr[2]- arr[0]- arr[1]- 1 < 0? 0 : arr[2]- arr[0]- arr[1]- 1);
		// cout<<minnp<<" "<<maxxp<<endl;
		if(maxxp >= m && minnp <=m) cout<<"YES\n";
		else cout<<"NO\n";
	}
}