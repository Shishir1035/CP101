// https://codeforces.com/problemset/problem/1428/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int absolute(int a, int b)
{
	if (a>b)
		return a-b;
	else
		return b-a;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(a==c || b==d)
			cout<<absolute(a+b-c-d,0)<<endl;
		else
			cout<<absolute(a-c,0)+absolute(b-d,0)+2<<endl;
	}
}