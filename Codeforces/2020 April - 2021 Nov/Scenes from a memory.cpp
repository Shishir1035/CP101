#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool prime[110];
int convint(char c)
{
	return (c-48);
}
void valueset()
{
	for (int i = 0; i < 100; ++i)
		prime[i]=1;
	return;
}
void setprime()
{
	valueset();
	for (int i = 0; i <100 ; ++i)
	for (int j = 2; j*j <= i; ++j)
	{
		if(i%j == 0)
		{	
			prime[i]=false;
			break;
		}		
	}
}

pair<bool,char> case1(string str, int n)
{
	char c;
	bool flag=false;
	for (int i = 0; i < n; ++i)
	{
		c=str[i];
		if(c=='1' || c=='4' ||c=='6' ||c=='8' ||c=='9')
		{
			flag = true;
			break;
		}
	}
	return {flag,c};
}
pair<char, char> case2(string str, int n)
{
	char a='c',b='d';
	for (int i = 0; i < n; ++i)
	for (int j = i+1; j < n; ++j)
	{
		int temp = convint(str[i]) * 10 + convint(str[j]);
		if(!prime[temp])
		{
			a=str[i],b=str[j];
			break;
		}
	}
	return {a,b};
}
int main()
{
	setprime();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string str;
		cin>>n>>str;
		//case 1
		pair<bool,char>ans = case1(str,n);
		if(ans.first)
			cout<<1<<endl<<ans.second<<endl;
		//case 2
		else if(!ans.first)
		{
			pair<char,char> res = case2(str,n);
			cout<<2<<endl<<res.first<<res.second<<endl;
		}
		
	}
}
/*
2
23
2
27
2
37
1
1
2
35
2
77
2
73
2
73
*/