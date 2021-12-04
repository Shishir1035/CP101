// https://codeforces.com/problemset/problem/1358/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int mi = min(n,m);
		if(n==1 && m==1)
			cout<<1<<endl;
		else if(m==n && m%2 == 0)
			cout<<m*n/2<<endl;
		else if(m==n && m%2 == 1)
			cout<<m*n/2 + 1<<endl;
		else if(m%2==0 || n%2==0)
			cout<<m*n/2<<endl;
		else
		{
			int ans = m*(n-1)/2 + m/2;
			if(m%2 == 1)
				cout<<ans+1<<endl;
			else
				cout<<ans<<endl;
		}
	}
}