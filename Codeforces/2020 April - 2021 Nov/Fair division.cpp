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
		int a,uan=0,tu=0;
		while(n--)
		{
			cin>>a;
			a==1? uan++ : tu++;
		}
		if(uan%2 == 0 && tu%2==0) 
			cout<<"YES\n";
		else if(uan && (uan - 2*tu) %2==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}