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
		ll n,h;
		cin>>n>>h;
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];
		sort(v.begin(), v.end());
		ll temp = v[n-1] + v[n-2];
        int ans = ceil((double) h / temp);
        h -= ans * temp;
        ans = ans * 2;
        if(h + v[n-2] <= 0)
        {
       		ans--;
       	    h += v[n-2];
       	}
        if(h + v[n-1] <= 0)
        	ans--;
        cout << ans << endl;
	}
}
