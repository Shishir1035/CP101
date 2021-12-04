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
		int a,b;
		string str;
		cin>>a>>b;
		cin>>str;
		if((a==1 && b==0) || (a==0 && b==1))
		{
			cout<<0<<endl;	
			continue;
		}
		if(a%2 || b%2)
		{
			cout<<-1<<endl;
			continue;
		}
		int one=0, zero=0, flag=1;
		for (int i = 0; i < (a+b)/2; ++i)
		{
			if((str[i] != str[a+b-1-i]) && (str[i]!='?' || str[a+b-1-i]!='?'))
			{
				flag=0;
				cout<<-1<<endl;
				break;
			}

			if(str[i]==str[a+b-1-i] && str[i]=='1')
				one++;

			else if (str[i]==str[a+b-1-i] && str[i]=='0')
				zero++;

			else if (str[i]== '1' && str[a+b-1-i]=='?')
				str[a+b-1-i]='1',one++;

			else if (str[i]== '?' && str[a+b-1-i]=='1')
				str[i]='1',one++;

			else if (str[i]== '0' && str[a+b-1-i]=='?')
				str[a+b-1-i]='0',zero++;

			else if (str[i]== '?' && str[a+b-1-i]=='0')
				str[i]='0',zero++;

			else if (str[i]=='?' && str[a+b-1-i]=='?')
			{
				if (one+2<a)
				{
					str[i]='1';
					str[a+b-1-i]='1';
					one+=2;
				}
				else if (zero<b)
				{
					str[i]='0';
					str[a+b-1-i]='0';
					zero+=2;
				}
			}
			cout<<zero<<" "<<one<<" "<<str<<endl;
		}
		if((one>a || zero>b) && flag)
			cout<<-1<<endl;
		else if (flag)
			cout<<str<<endl;
	}
}