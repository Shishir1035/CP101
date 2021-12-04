#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll find(vector<ll> &v, ll val, ll n)
{
	ll i = 0, j=n-1, mid;
	while(i<=j)
	{
		mid=(i+j)/2;
		if(v[mid]==val)
				return mid;
		else if(v[mid] >= val)
			j=mid-1;
		else
			i=mid+1;
	}
}
void solve(vector<ll>&arr, ll n, ll k)
{
	vector<ll>sorrt;
	ll cnt=0;
	vector<ll>temp; temp = arr;
	sort(temp.begin(),temp.end());
	ll p=0, q=0, i=0;
	ll loc=find(temp,arr[i],n);
	while(i < n)
	{

		if(arr[i+p] == temp[loc+q])
			cnt++,p++,q++;
		else if((i+p >= n || loc+q >= n) || (arr[i+p] != temp[loc+q]))
		{
			sorrt.push_back(cnt);
			i = i+p;
			loc = find(temp,arr[i],n);
			p = q = cnt = 0;
		}
	}
	ll lol = sorrt.size();
	if(lol <= k)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		vector<ll>v(n);
		for (ll i = 0; i < n; ++i)
			cin>>v[i];
		solve(v,n,k);
	}
	return 0;
}