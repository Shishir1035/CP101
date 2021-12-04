#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ll t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		ll n,k;
		cin>>n>>k;
		ll hotash[110],j=1;
		ll rem=n, count=0;

		for (ll i = 0; i < n; ++i)
		{
			if(count<k && i%2)
			{
				hotash[i]=rem, rem--, count++;
			}
			else
			{
				hotash[i]=j, j++;
			}
		}

		if((n-1)/2 < k)
			cout<<-1<<endl;
		else if (count>=k)
			for (ll i = 0; i < n; ++i)
				{
					cout<<hotash[i]<<" \n"[i==n-1];
				}
		else
			cout<<-1<<endl;
	}
}