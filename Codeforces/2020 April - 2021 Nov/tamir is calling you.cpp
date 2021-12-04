// https://codeforces.com/problemset/problem/764/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int LCM(int x,int y)
{
	int a=min(x,y), b=max(x,y);
	while(a!=0)
	{
		int rem=b%a;
		b=a, a=rem;
	}
	return x*y/b;
}
int main()
{
	int n,m,z;
	cin>>n>>m>>z;
	cout<<z/LCM(n,m)<<endl;
}