#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n,m;
	cin>>n>>m;
	double minn=10000;
	for (int i = 0; i < n; ++i)
	{
		double
 a,b;
		cin>>a>>b;
		minn=min(minn,a/b);
	}
	cout<<fixed<<setprecision(8);
	cout<<m*minn<<endl;

}