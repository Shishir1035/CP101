// https://codeforces.com/problemset/problem/1501/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int n,arr[110][2],arr1[110],diff[110];

void differ(void)
{
	diff[0]=0;
	for (int i = 1; i < n; ++i)
		diff[i]=arr[i][0]-arr[i-1][1];
}

int calculation(void)
{
	for (int i = 0; i < n; ++i)
		{
			int x=arr[i][0], y=arr[i][1];
			int d = ceil((y-x)/2.0);
			if(i==0)
			{
				arr[i][0]=arr[i][0]+arr1[i];
				int p = arr[i][0]+d;
				if(p > arr[i][1])
					arr[i][1] = p;
				continue;
			}

			arr[i][0]= arr[i-1][1]+arr1[i]+diff[i];
			int p = arr[i][0]+d;

			if(p > arr[i][1])
				arr[i][1] = p;
		}
		return arr[n-1][0];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			int a,b;
			cin>>a>>b;
			arr[i][0]=a; arr[i][1]=b;
		}

		for (int i = 0; i < n; ++i)
		{
			int a; cin>>a; arr1[i]=a;
		}
		differ();
		cout<<calculation()<<endl;
	}
}
