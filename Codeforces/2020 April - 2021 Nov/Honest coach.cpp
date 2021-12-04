//https://codeforces.com/problemset/problem/1360/B
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
	int t,arr[60];
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			arr[i]=a;
		}
		sort(arr,arr+n);
		int mi = arr[1] - arr[0];
		for(int i = 1; i<n - 1; i++)
		{
			int d = arr[i+1] - arr[i];
			if(d < mi)
				mi = d;
		}
		cout<<mi<<endl;
	}
}