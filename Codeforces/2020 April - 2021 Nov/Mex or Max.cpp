#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int findmex(vector<int> &v)
{
	int temp, ln = v.size();
	temp = ln;
	for (int i = 0; i < ln; ++i)
	{
		if(v[i] != i)
		{
			temp = i;
			break;
		}
	}
	return temp;
}

bool find(vector<int> &v, int x)
{
	ll i = 0, j=v.size()-1, mid;
	while(i<=j)
	{
		mid=(i+j)/2;
		if(v[mid]==x)
				return true;
		else if(v[mid] >= x)
			j=mid-1;
		else
			i=mid+1;
	}
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];

		vector<int>::iterator it;
	    it = unique (v.begin(), v.end()); 
	    v.resize(distance(v.begin(),it) );
	    sort(v.begin(), v.end());
	  	int temp = v.size();

		if(k == 0)
			cout<<temp<<endl;
		//case 1
		else if(findmex(v) >= temp)
			cout<<temp+k<<endl;
		else
		{
			int mx = findmex(v), x = ceil( (mx+v[temp-1])*.5 );
			bool fnd = find(v,x);
			if (fnd)
				cout<<temp<<endl;
			else
				cout<<temp+1<<endl;
		}
	}
}