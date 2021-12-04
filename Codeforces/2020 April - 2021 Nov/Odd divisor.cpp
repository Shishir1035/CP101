#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		while(!(n%2))
			n/=2;
		if(n==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}