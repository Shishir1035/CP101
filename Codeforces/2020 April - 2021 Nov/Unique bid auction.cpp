#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>v1(n),v2(n);
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			v1[i]=a;
			v2[i]=a;
		}
		if(n==1)
			cout<<1<<endl;
		else
		{
		sort(v1.begin(), v1.end());
		int temp;
		for (int i = 0; i < n-1; ++i)
		{
			if(v1[i]==v1[i+1])
				{
					temp=0;
					continue;
				}
			else if(v1[i] != v1[i+1] && i==0)
			{
				temp=v1[i];
				break;
			}
			else if(v1[i] != v1[i+1] && v1[i+1]!=v1[i+2])
			{
				temp=v1[i+1];
				break;
			}
		}
		int flag=0;
		for (int i = 0; i < n; ++i)
		{
			if(v2[i]==temp)
			{
				flag=i+1;
				break;
			}
		}
		if(flag)
			cout<<flag<<endl;
		else
			cout<<-1<<endl;
		}
	}
}