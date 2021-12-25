#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
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
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,n;
		cin>>n;

		ll ans, temp = n/3;
		ll rem = n%3;
		if(n<3)
			ans = n;
		else if(rem == 1)
			ans = bigmod(3, temp-1) * 4; 
		else if(rem == 2)
			ans = bigmod(3, temp) * 2;
		else
			ans = bigmod(3, temp);

		cout<<ans%M<<endl;
	}
}
