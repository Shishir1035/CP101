// https://codeforces.com/problemset/problem/141/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int main()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	s1 = s1 + s2;
	sort(s1.begin() , s1.end());
	sort(s3.begin() , s3.end());
	if(s1 == s3)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}