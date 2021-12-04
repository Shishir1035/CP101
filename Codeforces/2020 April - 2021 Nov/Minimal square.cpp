// https://codeforces.com/problemset/problem/1360/A
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
		int a,b;
		cin>>a>>b;
		int m = max(a,b);
		int mi = min(a,b);
		if(a==b)
			cout<<4*a*b<<endl;
		else if(a*b*2 <= m*m)
			cout<<m*m<<endl;
		else if(2 * mi > m)
			cout<<4*mi*mi<<endl;
	}
}