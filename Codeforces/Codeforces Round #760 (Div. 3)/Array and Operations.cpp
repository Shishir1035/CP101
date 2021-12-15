#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
int sol(vector<int>v, int k)
{
	int st=v.size()- 2*k;
	int mid = (st + v.size()) / 2;
	for (int i = 0; i < k; ++i)
		{
			if(v[st] && v[mid])
		    	v.pb(v[st] / v[mid]);
		    v[st] = v[mid] = 0;
		    st++, mid++;
		}
	int sum = v[0];
	for (int i = 1; i < v.size(); ++i)
		sum+=v[i];
	return sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		std::vector<int> v;
		for (int i = 0; i < n; ++i) 
			{
				int a;
				cin>>a;
				v.pb(a);
			}

		sort(v.begin(), v.end());

		int ans = sol(v,k);
		cout<<ans<<endl;


	}
}