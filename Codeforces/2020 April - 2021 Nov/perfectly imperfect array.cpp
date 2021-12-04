#include<bits/stdc++.h>
using namespace std;
map<int, int> lol;
void solve(long long n)
{
	vector<long long> nyvec(n);
	for (long long i = 0; i < n; ++i)
		cin>>nyvec[i];
	long long flag=0;
	for (long long i = 0; i < n; ++i)
			if(lol.find(nyvec[i])==lol.end())
			{
				flag=1;
				break;
			}
	if (flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}		
int main()
{
	long long t;
	cin>>t;
	for (int i = 1; i < 110; ++i)
		lol[i*i]=1;
	for (int i = 0; i < t; ++i)
	{
		long long n;
		cin>>n;
		solve(n);
	}
}