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
		int ans = 0;
		int xa,xb,xf,ya,yb,yf;
		cin>>xa>>ya>>xb>>yb>>xf>>yf;
		if(xa==xb && xb == xf)
			{
				ans += abs(yb-ya);
				if((yf>ya && yf<yb) || (yf>yb &&yf<ya))
					ans += 2;
			}
		else if(ya==yb && yb == yf)
			{
				ans += abs(xb-xa);
				if((xf>xa && xf<xb) || (xf>xb &&xf<xa))
					ans += 2;
			}
		else
			ans += abs(xb-xa) + abs(ya-yb);
		cout<<ans<<endl;
	}
}