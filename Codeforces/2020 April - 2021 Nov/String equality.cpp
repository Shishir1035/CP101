#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
void init(int arr[])
{
	for (int i = 0; i < 27; ++i)
		arr[i] = 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[27];
		init(arr);
		int n;
		cin>>n;
		string s;
		for (int i = 0; i < n; ++i)
		{
			cin>>s;
			for (int j = 0; j < s.size(); ++j)
				arr[s[j]- 'a']++;
		}
		// printarr(arr,27);
		int val = arr[0];
		bool flag = true;
		for (int i = 0; i <= 26; ++i)
		{
			if (arr[i]%n>0)
			{
				flag = false;
				break;
			}
		}
		// cout<<n<<" "<<flag<<endl;
		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}