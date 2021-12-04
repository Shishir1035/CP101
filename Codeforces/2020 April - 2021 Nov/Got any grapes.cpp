#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=x && a+b-x>=y && a+c+b-y-x>=z)
				cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}