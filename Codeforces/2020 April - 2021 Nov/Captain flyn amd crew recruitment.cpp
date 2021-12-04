// https://codeforces.com/problemset/problem/1388/A
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
		ll n;
		cin>>n;
		if(n==36 || n==40 || n==44)
			cout<<"YES"<<endl<<n-31<<" "<<6<<" "<<10<<" "<<" "<<15<<endl;
		else if(n<31)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
	}
}