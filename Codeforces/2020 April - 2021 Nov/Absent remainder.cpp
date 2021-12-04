#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
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
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];
		int mx = *min_element(v.begin(), v.end());
		int k = 0, mid = n/2;
		for (int i = 0; i < n && k < mid; ++i)
		{
			if(mx != v[i])
			{
				cout<<v[i]<<" "<<mx<<endl;
				k++;
			}
		}
	}
}