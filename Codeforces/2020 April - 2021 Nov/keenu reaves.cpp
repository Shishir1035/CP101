#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int check(string str, int n)
{
	int zero=0, one=0;
	for (int i = 0; i < n; ++i)
	{
		if (str[i]=='1')
			one++;
		else
			zero++;
	}
	return one!=zero;
}
int main()
{
	int n,temp;
	string str;
	cin>>n>>str;
	if (n==1)
		cout<<1<<endl<<str<<endl;
	else if(check(str,n)==1)
		cout<<1<<endl<<str<<endl;
	else if(n%2==0)
	{
		int one=0, zero=0;
		for (int i = 0; i < n; ++i)
		{
			if(str[i]=='1')
				one++;
			if(str[i]=='0')
				zero++;
			if(one != zero)
				{
					temp=i;
					break;
				}
		}
		cout<<2<<endl;
		for (int i = 0; i <= temp; ++i)
			cout<<str[i];
		cout<<" ";
		for (int i = temp + 1; i < n; ++i)
			cout<<str[i];
		cout<<endl;
	}
	else if(n%2)
	{
		int one=0, zero=0;
		for (int i = 0; i < n; ++i)
		{
			if(str[i]=='1')
				one++;
			if(str[i]=='0')
				zero++;
			if(one != zero && i%2)
				{
					temp=i;
					break;
				}
		}
		cout<<2<<endl;
		for (int i = 0; i <= temp; ++i)
			cout<<str[i];
		cout<<" ";
		for (int i = temp + 1; i < n; ++i)
			cout<<str[i];
		cout<<endl;
	}

}