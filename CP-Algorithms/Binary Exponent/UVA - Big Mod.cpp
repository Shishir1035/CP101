#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll bigmod(int a, int n, int m)
{
	ll res = 1;
	a %= m;
	while(n)
	{
		if(n&1)		//if last binary digit odd
			res = (res * a) % m;
		a = (a * a) % m;
		n>>=1;
	}
	return res;
}
int main()
{
	int a,n,m;
	while(cin>>a>>n>>m)
		cout<<bigmod(a,n,m)<<endl;
}