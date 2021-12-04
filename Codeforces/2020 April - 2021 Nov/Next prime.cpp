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
	
	int arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	int a,b;
	bool flag = false;
	cin>>a>>b;
	for (int i = 0; i < 14; ++i)
		if(arr[i] == a && arr[i+1] == b)
			flag = true;
	(flag)? cout<<"YES\n" : cout<<"NO\n";
}