// https://codeforces.com/problemset/problem/1399/B
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
	ll t;
	cin>>t;
	while(t--)
	{
		ll step = 0;
		ll n,can[60],ora[60];
		cin>>n;
		for (ll i = 0; i < n; ++i)
			{
				ll a;
				cin>>a;
				can[i] = a;
			}
		for (ll i = 0; i < n; ++i)
			{
				ll a;
				cin>>a;
				ora[i] = a;
			}
		ll m1 = *min_element(can,can+n);
		ll m2 = *min_element(ora,ora+n);
		for (ll i = 0; i < n; ++i)
		{
			while(can[i] != m1 || ora[i] != m2)
			{
				if(can[i] > m1 && ora[i] > m2)
				{
					ll d = min(can[i] - m1, ora[i] - m2);
					step += d;
					can[i] -= d;
					ora[i] -= d;
				}
				if(can[i] > m1 && ora[i] == m2)
				{
					ll e = can[i] - m1;
					step += e;
					can[i] -= e;
				}
				if(ora[i] > m2 && can[i] == m1)
				{
					ll f = ora[i] - m2;
					step += f;
					ora[i] -= f;
				}
			}
		}
		cout<<step<<endl;
	}
}