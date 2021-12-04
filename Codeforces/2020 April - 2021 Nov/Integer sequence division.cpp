#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ll t;
	cin>>t;
	ll ans = (t * (t+1))/2;
	cout<<ans % 2<<endl;
}