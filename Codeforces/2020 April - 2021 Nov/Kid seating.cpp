// https://codeforces.com/problemset/problem/1443/A
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
		int n;
		cin>>n;
		for (int i = 2*n+2; i <= 4*n; i+=2)
			cout<<i<<" \n"[i==4*n];
	}
}