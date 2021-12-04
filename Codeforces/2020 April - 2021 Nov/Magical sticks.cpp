// https://codeforces.com/problemset/problem/1371/A
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<1+(--n/2)<<endl;
	}
}