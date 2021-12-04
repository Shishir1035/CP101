#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		a=b=c=0;
		string str;
		cin>>str;
		// cout<<str<<endl;
		int sz = str.size();
		for (int i = 0; i < sz; ++i)
		{
			// cout<<str[i]<<endl;
			if(str[i] == 'A') a++;
			else if(str[i] == 'B') b++;
			else if(str[i] == 'C') c++;
		}
		// cout<<a<<" "<<b<<" "<<c<<endl;
		if(a+c == b)cout<<"YES\n";
		else cout<<"NO\n";
	}
}