// https://codeforces.com/problemset/problem/1285/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n,l=0,r=0;
	string str;
	cin>>n;
	cin>>str;
	for (int i = 0; i < str.size(); ++i)
	{
		if(str[i]=='L') 
			l++;
		else 
			r++;
	}
	cout<<l+r+1<<endl;
}