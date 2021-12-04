#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int notprime(int n)
{
	int flag=1;
	for (int i = 2; i*i < n; ++i)
		if(n%i==0)
		{
			flag=0;
			break;
		}
	return flag;
}
int main()
{
	int n,i=1;
	cin>>n;
	if(n%2 && n!=1)
		cout<<1<<endl;
	else
	{
		while(notprime((n*i)+1))
			i++;
		cout<<i<<endl;
	}
}