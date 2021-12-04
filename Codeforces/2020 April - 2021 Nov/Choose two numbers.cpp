#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n,maxx1=0;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		maxx1=max(maxx1,a);
	}
	int m,maxx2=0;
	cin>>m;
	for (int i = 0; i < m; ++i)
	{
		int a;
		cin>>a;
		maxx2=max(maxx2,a);
	}
	cout<<maxx1<<" "<<maxx2<<endl;
}