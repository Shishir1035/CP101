#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n,c,arr[100100];
	cin>>n>>c;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		arr[i]=a;
	}
	int cnt=0;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] - arr[i-1] <= c)
			cnt++;
		else
			cnt=0;
	}
	cout<<cnt+1<<endl;  
}