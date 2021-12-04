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
		int n;
		cin>>n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			v[i]=a;
		}
		int counter=1;
		set<int>mst;
		while(counter < n)
		{
			for (int i = 0; i < n-counter; i++)
			{
				int temp = absolute(v[i], v[i+counter]);
				mst.insert(temp);
				// cout<<mst.size()<<endl;
			}
			counter++;
		}
		cout<<mst.size()<<endl;
	}
}
