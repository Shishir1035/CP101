#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		int res;
		cin>>n;
		std::vector<int> v(n);
		for(int i = 0; i<n; i++)
			cin>>v[i];
		res = v[0];
		for (int i = 1; i < n; ++i)
			res &= v[i];
		cout<<res<<endl;
	}
}