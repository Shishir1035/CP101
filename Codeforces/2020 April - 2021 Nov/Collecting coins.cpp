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
		int arr[3],n;
		cin>>arr[0]>>arr[1]>>arr[2]>>n;
		sort(arr,arr+3);
		int temp = n - (arr[2] - arr[1] + arr[2] - arr[0]);
		if(temp % 3 == 0 && temp >= 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO\n";

	}
}