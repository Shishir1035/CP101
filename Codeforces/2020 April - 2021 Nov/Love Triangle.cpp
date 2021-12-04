#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int arr[10000], t;
	cin>>t;
	arr[0]=0;
	for (int i = 1; i <= t; ++i)
	{
		int a;
		cin>>a;
		arr[i]=a;
	}
	int flag=0;
	for (int i = 1; i <= t; ++i)
	{
		if(arr[arr[arr[i]]]==i)
		{
			flag=1;
			break;
		}
	}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}