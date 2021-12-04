#include<bits/stdc++.h>
using namespace std;
#define modulo 1000000007
long long int bigmodulo(long long int p,long long int q)
{
	if(q==0) 
		return 1;
	if(q%2==0) 
	{
		long long int hotash=bigmodulo(p,q/2);
		return (((hotash % modulo)*(hotash%modulo)) % modulo);
	}
	else 
		return (((p%modulo)*(bigmodulo(p,q-1)%modulo)) % modulo);	
} 
void solve(long long n, long long k)
{
	long long ans=bigmodulo(n,k);
	cout<<ans<<'\n';
}
int main()
{
	long long int count;
	cin>>count;
	for (int i = 0; i < count; ++i)
	{
		long long int n,k;
		cin>>n>>k;
		solve(n,k);
	}
}
