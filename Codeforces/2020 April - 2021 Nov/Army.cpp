#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for (int i = 0; i < n-1; ++i)
	{
		int a;
		cin>>a;
		v[i]=a;
	}
	int a,b;
	cin>>a>>b;
	int sum=0;
	if(a==1)
	{
		for (int i = 0; i <= max(b-2,0); ++i)
			sum+=v[i];
		cout<<sum<<endl;
		return 0;
	}
	else
	{
		int start=max(a-1,0), end=max(b-2,0);
		for (int i = start; i <= end; ++i)
			sum+=v[i];
		cout<<sum<<endl;
	}
}