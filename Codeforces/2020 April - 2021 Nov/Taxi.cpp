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
	int n;
	cin>>n;
	vector<int>v(n);
	for (int i = 0; i < n; ++i)
		cin>>v[i];
	sort(v.begin(), v.end());
	int i = 0, sum = 0, ans = 0;
	while(i < n)
	{
		if(sum+v[i] < 4)
		{
			while(sum + v[i] < 4)
			{
				sum += v[i];
				i++;
			}
			ans++;
			print(i);
			print(ans);
			sum = 0;
		}
		else
		{
			sum=v[i];
			ans++;
			i++;
		}
		
	}
	print(ans);
}
