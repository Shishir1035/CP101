//https://codeforces.com/problemset/problem/1367/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int main()
{
	int t,arr[45];
	cin>>t;
	while(t--)
	{
		int n, even = 0, odd = 0, d = 0, e = 0;
		int se[25], so[25];
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			arr[i] = a;
			if(a%2 == 1)
			{
				odd++;
				if (i%2 == 0)
					so[d++]=i;
			}
			else if(a%2 == 0)
			{
				even++;
				if (i%2 == 1)
					se[e++]=i;
			}
		}
		if(arr[0] % 2 == 1 && n == 1)
			{
				cout<<-1<<endl;
				continue;
			}
		if(even < odd || even - odd > 1)
			cout<<-1<<endl;
		else
			cout<<d<<endl;
	}
}