// https://codeforces.com/problemset/problem/1311/A
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
	if(a==b)
		cout<<0<<endl;
	else if(a<b)
	{
		if(b-a == 2)
			cout<<2<<endl;
		else if((b-a)%2 == 0)
			cout<<2<<endl;
		else
			cout<<1<<endl;
	}
	else if(a>b)
	{
		if((a-b)%2 == 1)
			cout<<2<<endl;
		else
			cout<<1<<endl;
	}
	}
}