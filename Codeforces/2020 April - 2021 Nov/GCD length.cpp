#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,x,y,z;
		cin>>a>>b>>c;
		x=y=z=1;
		for (int i = 1; i < a; ++i) x *= 10;
		for (int i = 1; i < b; ++i) y *= 10;
		for (int i = 1; i < c; ++i) z *= 10;
		cout<< x+z <<" "<<y<<endl;
	}
}