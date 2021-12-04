#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int triangle(int a, int b, int c)
{
	return (a+b >= c && b+c >= a && c+a >= b);
}

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (triangle(a,b,c))
	{
		if(a==b && b==c && c==a)
			cout<<"Equilateral Triangle"<<endl;
		else if(a==b || a==c || c==b)
			cout<<"Isosceles Triangle"<<endl;
		else
			cout<<"Bad Triangle"<<endl;
	}
	else 
		return 0;
}