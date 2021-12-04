#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	string str;
	cin>>str;
	int f=0, s=0;
	for (int i = 0; i < str.size()-1; ++i)
	{
		if(str[i]!=str[i+1])
		{
			if(str[i+1]=='F')
				f++;
			else
				s++;
		}
		else
			continue;
	}
	if(f>s)
		cout<<"YES"<<endl;
	else 
		cout<<"NO"<<endl;
}