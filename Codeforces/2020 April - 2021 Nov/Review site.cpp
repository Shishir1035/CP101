#include<iostream>
using namespace std;

void solve(long long n)
{
	long long cnt=0;
	for (long long i = 0; i < n; ++i)
	{
		long long a;
		cin>>a;
		if(a==3 || a==1)
			cnt++;
	}
	cout<<cnt<<endl;
}

int main()
{
	long long t;
	cin>>t;
	for (long long i = 0; i < t; ++i)
	{
		long long n;
		cin>>n;
		solve(n);
	}
}