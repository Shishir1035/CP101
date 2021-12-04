#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll pairs(std::vector<ll> v, ll n)
{
    unordered_map<ll, ll> mymap;
    for (ll i = 0; i < n; i++)
        mymap[v[i] - i]++;
    ll res = 0;
    for (auto x : mymap) 
    {
        ll cnt = x.second;
        res += ((cnt * (cnt - 1)) / 2);
    }
    return res;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        std::vector<ll> v(n);
        for (ll i = 0; i < n; ++i)
            cin>>v[i];
        cout << pairs(v,n)<<endl;
    }    
    return 0;
}