// https://codeforces.com/problemset/problem/703/A
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
	int t,chris=0,mishka=0;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if (a>b)
			mishka++;
		else if(a<b)
			chris++;
	}
	if(mishka>chris)
		cout<<"Mishka"<<endl;
	if(mishka<chris)
		cout<<"Chris"<<endl;
	if(mishka==chris)
		cout<<"Friendship is magic!^^"<<endl;	
}