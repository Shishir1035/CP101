#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i];
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
		string str;

		cin>>n>>str;
		vector<char>ans(n);
		for (int i = 0; i < n; ++i)
		{
			char c = str[i];
			if (c=='L'||c=='R')
				ans[i] = c;
			else if(c=='D')
				ans[i]='U';
			else if(c=='U')
				ans[i]='D';
		}
		printvec(ans,n);
		cout<<endl;
	}
}