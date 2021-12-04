#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n,k;
	map<int, int> mp;
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		mp[a]=i+1;
	}
	map<int,int>::iterator it=mp.begin();
	if (mp.size()>=k)
	{
		cout<<"YES"<<endl<<it->second; it++;
		for (int i = 0; i < k-1; ++i)
		{
			cout<<" "<<it->second;
			it++;
		}
		cout<<endl;
	}
	else
		cout<<"NO"<<endl;
	
}