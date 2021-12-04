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
		ll n,m,x,even1=0,even2=0,odd1=0,odd2=0;
		cin>>n;
		while(n--)
		{
			cin>>x;
			if (x%2)
				odd1++;
			else
				even1++;
		}
		cin>>m;
		while(m--)
		{
			cin>>x;
			if (x%2)
				odd2++;
			else
				even2++;
		}
		cout<<odd2*odd1 + even2*even1<<endl;	
	}
}