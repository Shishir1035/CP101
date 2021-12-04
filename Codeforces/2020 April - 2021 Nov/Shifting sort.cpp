#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
int findmax(int arr[], int n)
{
	int maxxx = arr[0], index = 1;
	for (int i = 1; i < n; ++i)
		if(arr[i] > maxxx) 
			maxxx = arr[i],index = i+1;

	cout<<" index "<<index<<endl;
	return index;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>arr(n);
		vector<pair<int,int> > ans;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		// printarr(arr,n);
		int st = 0, en=n;
		for (int i = 0; i < n-1 ; ++i)
		{
			vector<int>:: iterator pos = max_element(arr.begin(), arr.end());
			int lol = pos-arr.begin()+1;
			if(arr.size() != lol) 
				ans.push_back({lol,arr.size()});
			arr.erase(pos);
		}
		int sz = ans.size();
		cout<<sz<<endl;
		for (int i = 0; i < sz; ++i)
			cout<<ans[i].first<<" "<<ans[i].second<<" "<<1<<endl;
	}
}