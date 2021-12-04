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
		int n,k1,k2,A=0,B=0;
		cin>>n>>k1>>k2;
		for (int i = 0; i < k1; ++i)
		{
			int a;
			cin>>a;
			if(a==n)
				A=1;
		}
		for (int i = 0; i < k2; ++i)
		{
			int a;
			cin>>a;
		}
		if(A)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}