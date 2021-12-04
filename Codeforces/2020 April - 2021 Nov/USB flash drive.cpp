#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n,m;
	cin>>n>>m;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		v[i]=a;
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	int i,sum=0;
	for (i = 0; i < n; ++i)
	{
		sum+=v[i];
		if (sum>=m)
			break;
	}
	cout<<i+1<<endl;
}