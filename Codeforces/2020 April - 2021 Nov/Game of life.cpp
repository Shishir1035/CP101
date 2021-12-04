#include<bits/stdc++.h>
using namespace std;
void print(string str)
{
	cout<<str<<endl;
}
void solve()
{
	int n,m,i,j;
	string str,str2;
	cin>>n>>m>>str;
	str='0'+str+'0';
	str2=str;
	if(m>n)m=n;
	while(m--)
	{
		for ( j = 1; j <= n; ++j)
		{
			if(str[j]=='0')
				if((str[j-1]=='1'||str[j+1]=='1') && str[j-1]!=str[j+1])
				str2[j]='1';
		}
		str=str2;
	}
	str2.pop_back();
	str2.erase(str2.begin());
    print(str2);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}