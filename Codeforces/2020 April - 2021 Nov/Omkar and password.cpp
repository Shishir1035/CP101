#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ll t,arr[200200];
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			ll a;
			cin>>a;
			arr[i]=a;
		}
		sort(arr,arr+n);
		if(arr[0] == arr[n-1])
			cout<< n <<endl;
		else
			cout<< 1 <<endl;
	}
}