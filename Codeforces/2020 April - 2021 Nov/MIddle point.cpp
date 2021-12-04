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
		int x1,y1;
		cin>>x1>>y1;
		if(x1==0 && y1==0) cout<<"0 0\n";
		else if(x1%2==0 && y1%2) cout<<"-1 -1\n";
		else if(x1%2 && y1%2==0) cout<<"-1 -1\n";
		else if(x1%2 && y1%2) cout<<x1/2 <<" "<< y1/2 + 1<<"\n";
		else if(x1%2==0 && y1%2==0) cout<<x1/2 << " "<<y1/2<<"\n";

	}
}