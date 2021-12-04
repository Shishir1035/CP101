#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
bool check(int a, int d)
{
	while(a)
	{
		int rem = a%10;
		a = a/10;
		if(rem == d)
			return true;
	}
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d,a;
		cin>>n>>d;
		vector<int>v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];

		for (int i = 0; i < n; ++i)
		{
			if(check(v[i],d)) 
			{
				cout<<"YES"<<endl;
				continue;
			}
			bool flag = false;
			while(!flag && v[i] > 0)
			{
				// cout<<"BUN "<<v[i]<<endl;
				v[i] = v[i]-d;
				flag = check(v[i],d);
			}
			if(flag) cout<<"YES\n";
			else cout<<"NO\n";
		}	
	}
}