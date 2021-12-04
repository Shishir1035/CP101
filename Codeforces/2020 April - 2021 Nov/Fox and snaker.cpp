// https://codeforces.com/problemset/problem/510/A
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
	int r,c;
	cin>>r>>c;
	for (int i = 1; i <= r; ++i)
	{
		for (int j = 1; j <= c; ++j)
		{
			if(i % 4 == 1 || i % 4 == 3)
				cout << '#';
			else if(i % 4 == 2)
			{
				if(j == c)
				{
					cout<<'#';
					continue;
				}
				cout<<'.';
			}
			else if(i % 4 == 0)
			{
				if(j == 1)
				{
					cout<<'#';
					continue;
				}
				cout<<'.';
			}
		}
		cout<<endl;
	}
}