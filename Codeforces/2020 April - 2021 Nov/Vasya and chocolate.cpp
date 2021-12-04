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
		ll s,a,b,c;
		cin>>s>>a>>b>>c;
		cout<<(s/c)+((s/(c*a)*b))<<endl;
	}
}