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
		int n;
		cin>>n;
		if(n==2)
			cout<<2<<endl;
		else if(n%2)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
}

