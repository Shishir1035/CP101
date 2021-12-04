#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int a=0;
	string str;
	cin>>str;
	for (int i = 0; i < str.size(); ++i)
		if(str[i]=='a')
			a++;
	if(a > str.size()/2)
		cout<<str.size()<<endl;
	else if(2*a-1<str.size())
		cout<<2*a-1<<endl;
}
