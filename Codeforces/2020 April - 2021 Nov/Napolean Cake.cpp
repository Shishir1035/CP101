// https://codeforces.com/problemset/problem/1501/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,cnt=0;
		cin>>n;
		vector<int> v(n),v1;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			v[i]=a;
		}
		for (int i = n-1; i >= 0; --i)
		{
			cnt=max(cnt,v[i]);
			if(cnt)
				v1.push_back(1);
			else
				v1.push_back(0);
			cnt--;
		}
		reverse(v1.begin(),v1.end());
		for (int i = 0; i < n; ++i)
			cout<<v1[i]<<" \n"[i==n-1];
	}
}
