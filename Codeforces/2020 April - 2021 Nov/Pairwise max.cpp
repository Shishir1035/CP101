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
		int arr[3],x,y,z;
		cin>>arr[0]>>arr[1]>>arr[2];
		sort(arr,arr+3);
		// printarr(arr,3);

		if(arr[2]!=arr[1])
			cout<<"NO\n";
		else
			cout<<"YES\n"<<arr[2]<<" "<<arr[0]<<" "<<arr[0]<<endl;

	}
}