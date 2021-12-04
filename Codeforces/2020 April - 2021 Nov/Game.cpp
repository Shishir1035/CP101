// https://codeforces.com/problemset/problem/984/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t,arr[100100];
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int a;
		cin>>a;
		arr[i]=a;
	}
	sort(arr,arr+t);
	if(t%2)
		cout<<arr[t/2]<<endl;
	else
		cout<<arr[t/2 - 1]<<endl;
}