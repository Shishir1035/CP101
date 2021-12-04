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
		int n;
		cin>>n;
		int temp=n/2021;
		if(n%2020 == 0)
		{
			cout<<"YES"<<endl;
			continue;
		}
		else if(n%2020 != 0)
		{
			while(n%2020 != 0 && n>2020)
				n -= 2021;
			if(n%2020 == 0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
}