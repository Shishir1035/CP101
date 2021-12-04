// https://codeforces.com/problemset/problem/1283/A
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
	int h,m;
	cin>>h>>m;
	cout<<(24 - h)*60 - m<<endl;
	}
}