#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define inf 123456789012345
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll p,a,b,c;
		cin>>p>>a>>b>>c;
		if(p % a == 0 || p % b == 0 || p % c == 0)
			cout<<0<<endl;
		else if(p < a && p < b && p < c)
			cout<< min(min(a,b),c) - p <<endl;
		else
		{
			ll d = inf ,e = inf ,f = inf;
			if(p < a)
				d = a - p;
			if(p < b)
				e = b - p;
			if(p < c)
				f = c - p;
			d = min(d , a - ((p - a) % a));
			e = min(e , b - ((p - b) % b));
			f = min(f , c - ((p - c) % c));
			cout<< min(min(d,e),f)<<endl;
		}
	}
}