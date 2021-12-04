#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll arr[100100], ans[100100];
void convert(string str)
{
	for (int i = 0; i < str.size(); ++i)
	{
		if(str[i]=='1')
			arr[i]=1;
		else
			arr[i]=0;
	}
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string str;
		cin>>str;
		convert(str);

		// for (ll i = 0; i < n; ++i)
		// 	cout<<arr[i];
		// cout<<endl;

		ans[0]=1;
		for (ll i = 1; i < n; ++i)
		{
			if(arr[i]+1 != ans[i-1] + arr[i-1])
				ans[i]=1;
			else
				ans[i]=0;
		}
		for (ll i = 0; i < n; ++i)
			cout<<ans[i];
		cout<<endl;
	}
}