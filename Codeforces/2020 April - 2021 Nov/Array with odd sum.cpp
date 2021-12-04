// https://codeforces.com/problemset/problem/1296/A
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
		int n, even = 0, odd = 0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			if(a%2 == 1) odd++;
		}
		if(odd == 0)
			cout<<"NO"<<endl;
		else if(odd % 2 == 1)
			cout<<"YES"<<endl;
		else if(odd % 2 == 0 && odd<n)
			cout<<"YES"<<endl;
		else if(odd % 2 == 0 && odd == n)
			cout<<"NO"<<endl;
	}
}