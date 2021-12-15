#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sz;
		cin>>sz;
		std::vector<string> v;
		std::vector<char> ans;
		for (int i = 0; i < sz-2; ++i)
		{
			string in;
			cin>>in;
			v.pb(in);
		}
		ans.pb(v[0][0]);
		for (int i = 0; i < sz-3; ++i)
		{
			if(v[i][1] == v[i+1][0])
				ans.pb(v[i][1]);
			else
			{
				ans.pb(v[i][1]);
				ans.pb(v[i+1][0]);
			}
		}
		ans.pb(v[sz-3][1]);

		while(ans.size() != sz)
			ans.pb(v[sz-3][1]);

		printvec(ans,ans.size());
		cout<<endl;
	}
}