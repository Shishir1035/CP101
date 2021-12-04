#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int paren=0, brac=0, count=0;
		for (int i = 0; i< str.size(); ++i)
		{
			if(str[i]=='(')
				paren++;
			if(str[i]==')' && paren)
				paren--, count++;

			if(str[i]=='[')
				brac++;
			if(str[i]==']' && brac)
				brac--, count++;
		}
		cout<<count<<endl;
	}
}