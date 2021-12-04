#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	string str;
	cin>>str;
	int cnt=0;
	for (int i = 1; i < t; i+=2)
	{
		// cout<<str[i]<<" "<<str[i-1]<<endl;
		if (str[i-1]=='a' && str[i] != 'b')
			str[i]='b',cnt++;
		else if (str[i-1]=='b' && str[i] != 'a')
			str[i]='a',cnt++;
	}
	cout<<cnt<<endl<<str<<endl;
}