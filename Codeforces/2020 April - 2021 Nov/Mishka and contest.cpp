#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int arr[110],n,k,flag=1;
	int solve=0;
	cin>>n>>k;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		if(a<=k && flag)
			arr[i]=k+1, solve++;
		else
			arr[i]=a, flag=0;
	}
	for (int i = n-1; i >= 0; --i)
	{
		if (arr[i]<=k)
			solve++;
		else
			break;
	}
	cout<<solve<<endl;
}