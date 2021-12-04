// https://codeforces.com/problemset/problem/1491/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll power ( ll x, ll y)
{
    ll ans = 1;
    while(y--) ans = ans * x;
    return ans;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y,digit=0,count=0;
		cin>>x>>y;
		ll temp=y;
		while(temp)
			digit++,temp/=10;
		while(y)
		{
			while(digit>=0)
			{
				ll powa=x*power(10,digit);
				// cout<<digit<<" "<<powa<<endl;
				if(powa>y && y>=x)
					{
						digit--;
						continue;
					}
				count += y/powa;
				y=y%powa;

				if(!digit)
					break;
			}
			count += y;
			break;	
		}
		cout<<count<<endl;
	}
}
