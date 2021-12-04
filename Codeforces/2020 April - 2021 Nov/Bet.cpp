#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;

		if(a==b)
			cout<<"0 0"<<endl;

		else
		{
			ll x=max(a,b), y=min(a,b);
			ll diff = x-y, ans;
			ans = min(a%diff,diff - a%diff);
			cout<<diff<<" "<<ans<<endl;
		}
		

	}
	int a=0,b=2020;
	cout<<(a^b);
}