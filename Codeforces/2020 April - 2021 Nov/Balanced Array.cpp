// https://codeforces.com/problemset/problem/1343/B
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
ll arr[1000010];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a;
		cin>>a;
		if((a/2) % 2 == 1)
			cout<< "NO" <<endl;
		else
		{
			ll e = 2, o = 1, sume = 0, sumo = 0;
			for (int i = 0; i*2 < a; ++i)
			{
				arr[i] = e;
				sume += e;
				e += 2;
			}
			for (int i = a/2; i < a; ++i)
			{

				if(i == a-1)
				{
					arr[i] = sume - sumo;
					break; 
				}
				arr[i] = o;
				sumo += o;
				o += 2;
			}
			cout<<"YES"<<endl<<arr[0];
			for (int i = 1; i < a-1; ++i)
				cout<<" "<<arr[i];
			cout<<" "<<arr[a-1]<<endl;
		}

	}
}