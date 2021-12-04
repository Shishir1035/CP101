#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t,arr[1010],stair[1010],cnt=0,sum;
	cin>>t;
	int j=0;
	for (int i = 0; i < t; ++i)
	{
		int a;
		cin>>a;
		arr[i]=a;
		if(a==1)
		{
			stair[j++]=sum;
			cnt++;
		}
		sum=a;
	}
	stair[j++]=sum;
	cout<<cnt<<endl;
	for (int i = 1; i <= cnt; ++i)
		cout<<stair[i]<<" \n"[i==cnt];
}