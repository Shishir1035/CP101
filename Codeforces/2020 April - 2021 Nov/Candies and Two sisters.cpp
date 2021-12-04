// https://codeforces.com/problemset/problem/1335/A
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
	int t,a;
	cin>>t;
	while(t--)
	{
		cin >> a;
		if(a <= 2)
			cout << 0 << endl;
		else if(a%2 == 0)
			cout << a/2 - 1 << endl;
		else if(a%2 == 1)
			cout << a/2 <<endl;
	}
}