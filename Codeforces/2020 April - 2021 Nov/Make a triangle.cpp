#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int x=a,y=b,z=c;
	while(a+b<=c || a+c<=b)
		a++;
	while(b+c<=a || b+a<=c)
		b++;
	while(c+a<=b || c+b<=a)
		b++;
	cout<<a+b+c-x-y-z<<endl;
}