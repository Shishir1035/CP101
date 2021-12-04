// https://codeforces.com/problemset/problem/1325/B
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
	int t;
	cin>>t;
	while(t--)
	{
	 set<int>myset;
	 int n;
	 cin>>n;
	 while(n--)
	 {
	 	int a;
	 	cin>>a;
	 	myset.insert(a);
	 }
	 cout<<myset.size()<<endl;
	}
}