#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,n;
		cin>>a>>b>>n;
		std::vector<long long> attack(n),health(n);
		for (ll i = 0; i < n; ++i)
		{
			ll a;
			cin>>a;
			attack[i]=a;
		}
		for (ll i = 0; i < n; ++i)
		{
			ll a;
			cin>>a;
			health[i]=a;
		}
		// for (int i = 0; i < n; ++i)
		// 	cout<<attack[i]<<" \n"[i==n-1];
		// for (int i = 0; i < n; ++i)
		// 	cout<<health[i]<<" \n"[i==n-1];
		if (n==1)
		{
			if(a*b >= health[0]*attack[0])
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else

		{
			ll sum=0;
			for (int i = 0; i < n-1; ++i)
			sum+=attack[i]*health[i];
			cout<<sum<<endl;
			if (sum>b)
				cout<<"NO"<<endl;
			else
			{
				ll temp = a*b - sum;
				if (attack[n-1]*health[n-1] > temp)
				{
					if (health[n-1] == a)
						cout<<"YES"<<endl;
					else
						cout<<"NO"<<endl;
				}
				else
					cout<<"YES"<<endl;
			}
		}
	}
}
