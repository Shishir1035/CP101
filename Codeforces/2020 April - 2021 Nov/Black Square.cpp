// https://codeforces.com/problemset/problem/431/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int a1,a2,a3,a4;
	string s;
	cin>>a1>>a2>>a3>>a4;
	cin>>s;
	int one=0,two=0,three=0,four=0;
	for (int i = 0; i < s.size(); ++i)
	{
		
		if(s[i] == '1')
			one++;

		if(s[i] == '2')
			two++;
		
		if(s[i] == '3')
			three++;
		
		if(s[i] == '4')
			four++;
	}
	cout<< one*a1 + two*a2 + three*a3 + four*a4 <<endl;
}