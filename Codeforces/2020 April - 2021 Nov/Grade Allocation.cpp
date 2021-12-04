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
		ll n,m,sum=0,temp;
		cin>>n>>m;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			if (!i)
				temp=a;
			if(i)
				sum+=a;
		}
		if (temp+sum>=m)
			cout<<m<<endl;
		else
			cout<<temp+sum<<endl;
	}
}