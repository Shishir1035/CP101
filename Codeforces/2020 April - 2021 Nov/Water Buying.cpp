#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,a,b;
		cin>>n>>a>>b;
		if(a*2>b)
			cout<<n/2*b + n%2*a<<endl;
		else
			cout<<n*a<<endl;
	}
}