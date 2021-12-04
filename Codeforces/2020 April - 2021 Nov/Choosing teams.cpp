// https://codeforces.com/problemset/problem/432/A
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
//ll absolute(ll a, ll b)
//{
//	if (a>b)
//		return a-b;
//	else
//		return b-a;
//}

int main()
{
	int n,k,team = 0, stu = 0;
	cin>>n>>k;
	while(n--)
	{
		int a;
		cin>>a;
		if(a+k <= 5)
			stu++;
		if(stu == 3)
		{
			team++;
			stu = 0;
		}
	}
	cout<<team<<endl;
}