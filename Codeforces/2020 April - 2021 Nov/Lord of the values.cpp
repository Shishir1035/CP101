#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
void print(int i)
{
	cout<<1<<" "<<i+1<<" "<<i+2<<endl;
	cout<<2<<" "<<i+1<<" "<<i+2<<endl;
}
void solve()
{
	long long int n;
	cin>>n;
	cout<<n*3<<endl;
	vector<long long int> v(n);

	for (int i = 0; i < n; ++i)
		{
			long long int a;
			cin>>a;
			v[i]=a;
		}

	int bot=3;
	for (int i = 0; i < n; i+=2)
	{
		while(bot--)
			print(i);
		bot=3;
	}
}

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
		solve();
}