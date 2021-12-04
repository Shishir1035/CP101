#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int r,b,d;
		cin>>r>>b>>d;
		int x=min(r,b);
		int y=max(r,b);
		if((float)y/x - 1 <= d)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}