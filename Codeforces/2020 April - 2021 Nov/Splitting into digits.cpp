// https://codeforces.com/problemset/problem/1104/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t; 
	cin>>t;
	if(t==1)
		cout<<1<<endl<<1<<endl;
	else
	{
		for(int i=1; i*i<=t; i++)
		{
			if(t%i==0)
			{
				cout<<t/i<<endl;
				for (int j = 0; j < t/i; ++j)
					cout<<i<<" \n"[j == t/i - 1];
				return 0;
			}
		}
	}
	
}