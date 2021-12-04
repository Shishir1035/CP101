#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
ll absolute(ll a, ll b)
{
	if (a>b)
		return a-b;
	else
		return b-a;
}

int main()
{
	int a,b,s=0,f=0,d=0;
	cin>>a>>b;
	for(int i=1; i<=6; i++)
	{
		if(absolute(i,a) < absolute(i,b))
			f++;
		else if(absolute(i,a) > absolute(i,b))
			s++;
		else
			d++;
	}
	cout<<f<<" "<<d<<" "<<s<<endl;
}