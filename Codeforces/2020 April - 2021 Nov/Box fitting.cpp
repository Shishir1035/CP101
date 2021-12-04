#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int arr[100100];

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,w;
		cin>>n>>w;

		for (int i = 0; i < n; ++i) {
			int a; cin>>a; arr[i]=a;
		}
		sort(arr,arr+n);
		reverse(arr,arr+n);
		int space=0, temp=w;
		for (int i = 0; i < n; ++i)
		{
			if(arr[i]<=space)
			{
				space-=arr[i];
				arr[i]=0;
			}
			if(temp-arr[i]>0)
			{
				temp-=arr[i];
				space=w-temp;
				arr[i]=0;
			}
			if(space==0)
				box++;
		}
	
		// if(temp && temp != w) 
		// 	cout<<box+1<<endl;
		// else
		// 	cout<<box<<endl;
	}
}