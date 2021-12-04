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
		if(n%5)
			cout<<n/5 + 1<<endl;
		else
			cout<<n/5<<endl;
	}
}