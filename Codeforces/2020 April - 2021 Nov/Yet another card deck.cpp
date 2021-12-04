#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

map<int , int> mymap;

void input(int n)
{
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		if(mymap.find(a) == mymap.end())
			mymap[a]=i+1;
	}
}

void solve(int query)
{
	while(query--)
	{
		int a;
		cin>>a;
		cout<<mymap[a]<<' ';
		int cmp=mymap[a];
		mymap[a]=1;

		map<int,int> ::iterator it;
		for (it=mymap.begin(); it!=mymap.end(); ++it)
			if (it->first !=a && it->second <cmp)
				it->second++;
	}
}

int main()
{
	int n,q;
	cin>>n>>q;
	input(n);
	solve(q);
}