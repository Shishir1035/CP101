#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	string str;
	cin>>str;
	int cnt=0;
	for (int i = 0; i < str.size(); ++i)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='1' || str[i]=='3' || str[i]=='5' || str[i]=='7' || str[i]=='9')
			cnt++;
	}
	cout<<cnt<<endl;
}