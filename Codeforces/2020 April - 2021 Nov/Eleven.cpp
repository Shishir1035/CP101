#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n;
	cin>>n;
	std::vector<char> v(n);
	if(n<=3)
	{
		fill(v.begin(), v.end(), 'O');
		for (int i = 0; i < n; ++i)
			cout<<v[i];
		cout<<endl;
		return 0;
	}
	else
	{
		fill(v.begin(), v.end(), 'o');
		v[0]='O',v[1]='O',v[2]='O';
		int a=1,b=2;
		while(a+b<n)
		{
			int fib=a+b+1;
			if(fib>=n)
				break;
			else
				v[fib]='O',a=b,b=fib;
		}
	}
	for (int i = 0; i < v.size(); ++i)
		cout<<v[i];
	cout<<endl;
}