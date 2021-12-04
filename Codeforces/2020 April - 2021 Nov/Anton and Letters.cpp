// https://codeforces.com/problemset/problem/443/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
int main()
{
	string s;
	set<char>myset;
	getline(cin,s);
	for (int i = 0; i < s.size() ; ++i)
		{
			if(s[i] >= 'a' && s[i] <= 'z')
			myset.insert(s[i]);
		}

	cout<<myset.size()<<endl;
}