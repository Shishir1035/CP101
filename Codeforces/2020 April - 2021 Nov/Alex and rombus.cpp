#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	int c=1,sum=0;
	for (int i = 1; i < t; ++i)
	{
		sum+=2*c;
		c+=2;
	}
	cout<<sum+c<<endl;
}