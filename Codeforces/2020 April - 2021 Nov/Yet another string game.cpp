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
		int flag=1;
		string str;
		cin>>str;
		for (int i = 0; i < str.size(); ++i)
		{
			if(str[i]=='a' && i%2==0)
				str[i]='b';
			else if(i%2==0)
				str[i]='a';
			else if (str[i]=='z' && i%2)
				str[i]='y';
			else if(i%2)
				str[i]='z';
		}
		cout<<str<<endl;
	}
}