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
		int n,x,arr[60],arr1[60];
		cin>>n>>x;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			arr[i]=a;
		}
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			arr1[i]=a;
		}
		reverse(arr,arr+n);
		int flag=1;
		for (int i = 0; i < n; ++i)
		{
			if(arr[i]+arr1[i]>x)
			{
				flag=0;
				break;
			}
		}
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}