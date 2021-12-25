#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007LL
ll bigmod (ll a, ll b) 
{
    long long res = 1;
    while (b > 0) 
    {
        if (b & 1) 		//even, odd check
            res = (res * a) % M;
        a = (a * a) % M;
        b >>= 1;
    }
    return res;
}

int main()
{
	vector<ll>v(8);
	v[0]=1, v[1]=1, v[2]=2, v[3]=3, v[4]=4, v[5]=6, v[6]=9, v[7]=12;
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,n;
		cin>>n;
		if(n==1) 
		{
			cout<<1<<endl;
			continue;
		}
		ll ans=v[0], temp = n/6;
		ll rem = n%6;
		if(n<=7)
			ans = v[n];
		else if(rem != 1)
			ans = bigmod(9,temp) * v[rem]; 
		else
			ans = bigmod(9, temp-1) * v[7];

		cout<<ans<<endl;
	}
	
}