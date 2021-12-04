// https://codeforces.com/problemset/problem/1389/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll l,r;
		cin>>l>>r;
		if(l * (l+1) <= r)
			cout<<l<<" "<<l+1<<endl;
		else if (l*2 <= r)
			cout<<l<<" "<<l*2<<endl;
		else
			cout<<-1<<" "<<-1<<endl;
	}
}