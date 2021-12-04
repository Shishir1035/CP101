// https://codeforces.com/problemset/problem/1097/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	string s,s1;
	cin>>s;
	getchar();
	getline(cin,s1);
	for (int i = 0; i < s1.size(); ++i)
		if(s1[i] == s[0] || s1[i] == s[1])
		{
			cout<<"YES"<<endl;
			return 0;
		}
	cout<<"NO"<<endl;
}