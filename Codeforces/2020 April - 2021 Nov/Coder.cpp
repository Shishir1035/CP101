#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n;
	cin>>n;
	if(n%2==0)
		cout<< n*n/2 <<endl;
	else
		cout<< ((n/2+1)*(n/2+1)) + ((n/2) * (n/2)) <<endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i%2==0)
			{
				if(j%2==0) cout<<'C';
				else cout<<'.';
			}
			if(i%2)
			{
				if(j%2) cout<<'C';
				else cout<<'.';
			}
		}
		cout<<endl;
	}
}