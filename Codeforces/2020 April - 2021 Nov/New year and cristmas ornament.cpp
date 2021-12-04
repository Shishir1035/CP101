#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int y,b,r;
	cin>>y>>b>>r;
	for (int i = 0; i < 3; ++i)
	{
		if(y+1<b)
			b=y+1;
		if(y+2<r)
			r=y+2;
	}
	for (int i = 0; i < 3; ++i)
	{
		if(b-1<y)
			y=b-1;
		if(b+1<r)
			r=b+1;
	}
	for (int i = 0; i < 3; ++i)
	{
		if(r-1<b)
			b=r-1;
		if(r-2<y)
			y=r-2;
	}
	cout<<y+b+r<<endl;
}