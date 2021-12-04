// https://codeforces.com/problemset/problem/1353/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k, arr1[35], arr2[35];
		cin>>n>>k;

		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			arr1[i] = a;
		}
		sort(arr1, arr1+n);
		
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			arr2[i] = a;
		}
		sort(arr2, arr2+n);

		int l = n-1;
		for (int j = 0; j < k; ++j)
		{
			if(arr1[j]<arr2[l])
				arr1[j] ^= arr2[l] ^= arr1[j] ^= arr2[l];
			l--;
		}
		int sum = 0;
		for (int j = 0; j < n; ++j)
			sum += arr1[j];
		cout<<sum<<endl;
	}
}