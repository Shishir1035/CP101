#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, x, sum = 0;
        cin >> n >> x;
        vector <pair<ll,ll> > v(n);
        for(ll i=0;i<n;i++)
        	cin >> v[i].first, sum+=v[i].first;

        bool flag = true;
        for (ll i = 0; i < n; ++i)
        {
        	if(v[i].first % x == 0 && flag)
        	{
        		sum += v[i].first;
        		v[i].first /= x;
        		v.push_back({v[i].first , x});
        	}
        	else
        		flag = false;
        }
        if(flag)
        for (ll i = n; i < v.size(); ++i)
        {
        	if(v[i].first % x == 0)
        	{
        		sum += v[i].first * v[i].second;
        		v[i].first /= x;
        		v.push_back({v[i].first , v[i].second*x});
        	}
        	else 
        		break;
        }
        cout<<sum<<endl;
	}
}
