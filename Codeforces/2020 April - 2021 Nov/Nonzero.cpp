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
		int n,zero=0,sum=0;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			sum+=a;
			if(a==0)
				zero++;
		}
		if(sum==0 && zero==0)
			cout<<1<<endl;
		else if(zero)
		{
			sum+=zero;
			if (sum==0)
				cout<<zero+1<<endl;
			else
				cout<<zero<<endl;
		}
		else if(sum!=0 && zero==0)
			cout<<zero<<endl;
	}
}