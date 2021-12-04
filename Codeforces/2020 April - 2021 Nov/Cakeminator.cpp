#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	string s,str;
	int r,c;
	cin>>r>>c;
	while(getline(cin,s))
		str+=s;
	int S=0;
	for (int i = 0; i < r*c; ++i)
	{		
		if (str[i]=='S')
		S++;
	}
	if (r*c-2*S>0)
		cout<<s<<" "<<r*c-2*S<<endl;		
	else
		cout<<0<<endl;
}