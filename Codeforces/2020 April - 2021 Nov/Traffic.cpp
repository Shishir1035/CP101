#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll x,n,sum=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>x;
			sum += x;
		}
		cout<<(sum%n)*(n-sum%n)<<endl;
	}
}