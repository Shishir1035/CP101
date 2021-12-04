#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int digit (int n)
{
	int dig=0;
	while(n)
		n/=10, dig++;
	return dig;
}

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
		ll x,y;
		cin>>x>>y;
		ll k=0,cnt=0; 
		while(y)
		{
			ll temp=y/x;
			if (temp)
			{
				int dig=digit(temp)-1;
				int lol=x*power(10,dig);
				ll rem = y / lol;
				k += rem * lol;
				cnt+=rem, y -= rem*lol;
				continue;
			}
			temp=y/x;
			if(temp)
				k += x*temp, cnt+=temp, y -= x*temp;
			
			if(y/x == 0 && y!=0)
				k+=y, cnt+=y, y=0;
		}
	cout<<cnt<<endl;
	}
}
