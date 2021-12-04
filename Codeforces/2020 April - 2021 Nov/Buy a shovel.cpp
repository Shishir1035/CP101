// https://codeforces.com/problemset/problem/732/A
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
	ll k,r,count = 1;
	cin>>k>>r;
	ll temp = k % 10;
	ll t = k % 10;
	if(temp == 0 || temp == r)
	{
		cout<<1<<endl;
		return 0;
	}
	if(temp == 5)
	{
		cout<<2<<endl;
		return 0;
	}
	while(temp != r)
		{
			temp += t;
			temp = temp % 10;
			count++;
			if(temp==0)
				break;
		}
	cout<<count<<endl;
}