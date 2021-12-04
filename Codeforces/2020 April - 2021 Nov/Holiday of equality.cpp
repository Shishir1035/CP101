// https://codeforces.com/problemset/problem/758/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)

/**		power
ll power ( ll x, ll y)
{
    ll ans = 1;
    while(y--) ans = ans * x;
    return ans;
}
*/
ll absolute(ll a, ll b)
{
	if (a>b)
		return a-b;
	else
		return b-a;
}

int main()
{
	int n, i=0, arr[110], maxx=0;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		arr[i++] = a;

		if(a>maxx)
			maxx = a;
	}
	int sum = 0;
	for (int j = 0; j < i; ++j)
		sum += absolute(arr[j], maxx);
	cout<<sum<<endl;
}