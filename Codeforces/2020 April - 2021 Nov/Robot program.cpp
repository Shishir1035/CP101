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
		int x,y;
		cin>>x>>y;
		if(absolute(x,y)>1)
			cout<<2 * max(x,y) - 1<<endl;
		else
			cout<<x+y<<endl; 
	}
} 