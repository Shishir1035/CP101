#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
bool prime[100001];
void sieve()
{
    ll n=100000;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    	if (prime[p] == true)
        for (int i = p * p; i <= n; i += p)
            prime[i] = false;
}
int main()
{
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int d;
		cin>>d;
		long long int x = 1+d, y;
		while(!prime[x]) x++;
		y=x+d;
		while(!prime[y]) y++;
		
		cout<<x*y<<endl;
	}
}