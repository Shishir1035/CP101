#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll isprime(ll a)
{
	ll flag=0;
	for (ll i = 2; i*i <= a; ++i)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
int main()
{
	ll n;
	cin>>n;
	ll x=4, y=4+n;
	while(isprime(x)==0 || isprime(y)==0)
		x++,y++;
	cout<<y<<" "<<x<<endl;
}