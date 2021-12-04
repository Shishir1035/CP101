#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
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
		vector<int> v;
		vector<pair< pair<int,int> , int> >ansvec;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			v.pb(a);
		}
		int rem = v.size();
		if(rem<=1) 
		{
			cout<<0<<endl;
			continue;
		}

		sort(v.begin(), v.end());
		// printvec(v,sz);
		int ans = 0,i=1, maxx = v[rem-i];
		v.pop_back();

		while(v.size() > 0)
		{
			// cout<<"max = "<<maxx<<endl;
			int pos,sz = v.size();
			int temp = maxx - v[v.size()-i];
			if(temp >= 0)
			{
				int add = v[v.size()-i];
				ans += add;
				pos = v.size()-i;
				maxx = maxx - v[pos];
				v.pop_back();
				ansvec.push_back({{rem,rem-1},add});
				rem -= 1;
			}

			else if(temp < 0)
			{
				int add = maxx;
				ans += maxx;
				v[v.size()-i] -= maxx;
				maxx = v[v.size()-i];
				v.pop_back();
				ansvec.push_back({{rem,pos},maxx});

				rem -= 2;
			}
		}
				cout<<ans<<endl;

		for (int i = 0; i < ansvec.size(); ++i)
		{
			cout<<ansvec[i].first.first<<" "<<ansvec[i].first.second<<" "<<ansvec[i].second<<endl;
		}
	}
}