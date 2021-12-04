#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int allone(string str)
{
	for (int i = 0; i < str.size(); ++i)
	{
		if(str[i]=='0')
			return false;
	}
	return true;
}
int allzero(string str)
{
	for (int i = 0; i < str.size(); ++i)
	{
		if(str[i]=='1')
			return false;
	}
	return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,alice=0,bob=0;
		string str;
		cin>>n>>str;
		if(allone(str))
			{
				cout<<"DRAW"<<endl;
				continue;
			}
		else if(n%2)
		{
			if(allzero(str))
				cout<<"BOB"<<endl;
			else if(str[n/2]=='0')
				cout<<"ALICE"<<endl;
			else
				cout<<"BOB"<<endl;
		}
		else if(n%2==0)
			cout<<"BOB"<<endl;
	}
}