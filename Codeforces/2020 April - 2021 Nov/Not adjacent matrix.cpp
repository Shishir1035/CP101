#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for (int bot = 0; bot < t; ++bot)
	{
		int n;
		cin>>n;
		if(n==1)
			cout<<1<<endl;
		else if(n==2)
			cout<<-1<<endl;
		else
		{
			int odd=1;
			int even=2;
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					if(even<=n*n)
					{
						cout<<even<<" \n"[j==n-1];
						even+=2;
					}
					else if(odd<=n*n)
					{
						cout<<odd<<" \n"[j==n-1];
						odd+=2;
					}
				}
			}
		}
	}
}