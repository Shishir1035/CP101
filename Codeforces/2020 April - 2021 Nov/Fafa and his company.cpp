// https://codeforces.com/problemset/problem/935/A
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
	int n;
	cin>>n;
	int ans=0;
	for (int i = 2; i*i <= n; ++i)
	{
		if(i*i == n)
			ans+=1;
		else if(n%i == 0)
			ans+=2;
	}
	cout<<++ans<<endl;
}