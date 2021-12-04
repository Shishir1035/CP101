// https://codeforces.com/problemset/problem/723/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
ll absolute(ll a, ll b)
{
	if (a>b)
		return a-b;
	else
		return b-a;
}
ll middle(ll a,ll b,ll c)
{
	if((a>b && a<c) || (a<b && a>c))
		return a;
	if((b>a && b<c) || (b<a && b>c))
		return b;
	if((c>a && c<b) || (c<a && c>b))
		return c;
}
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int mid = middle(a,b,c);
	cout<< absolute(mid,a) + absolute(mid,b) + absolute(mid,c)<<endl;
}