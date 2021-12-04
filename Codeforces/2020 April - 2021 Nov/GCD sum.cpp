#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll sum(ll a)
{
	ll sum=0;
	while(a)
	{
		sum+=a%10; a/=10;
	}
	return sum;
}

ll gcd(ll a,ll b)
{
	ll x=min(a,b) , y=max(a,b);

	while(x)
		ll rem=y%x, y=x, x=rem;
	
	return y;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll gcde=gcd(sum(n),n);
		while(gcde <= 1)
		{
			n++;
			gcde = gcd(sum(n),n);
		}
		cout<<n<<endl;
	}
}