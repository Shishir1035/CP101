// https://codeforces.com/problemset/problem/34/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int absolute(int a, int b)
{
	if (a>b)
		return a-b;
	else
		return b-a;
}

int main()
{
	int t,arr[1010];
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int a;
		cin>>a;
		arr[i]=a;
	}
	int ps1=1,ps2=t,minn=absolute(arr[0],arr[t-1]);
		for (int i = 0; i < t-1; ++i)
		{
			int d = absolute(arr[i],arr[i+1]);
			if(d < minn)
			{
				minn=d;
				ps1=i+1,ps2=i+2;
			}
		}
		cout<<ps1<<" "<<ps2<<endl;
}
