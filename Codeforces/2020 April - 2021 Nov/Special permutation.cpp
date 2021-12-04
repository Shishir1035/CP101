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
		int n;
		cin>>n;
		if(n%2)
		{
			int mid=n/2+1;
			cout<<mid<<" ";
			for (int i = n; i >= 1; --i)
			{
				if(i==mid)
					continue;
				cout<<i<<" \n"[i==1];
			}
		}
		
		else
			for (int i = n; i >= 1; --i)
			cout<<i<<" \n"[i==1];
	}
}