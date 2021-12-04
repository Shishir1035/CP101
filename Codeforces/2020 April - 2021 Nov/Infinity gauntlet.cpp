#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n;
	cin>>n;
	std::vector<string> v;
	v.push_back("Power");
	v.push_back("Time");
	v.push_back("Space");
	v.push_back("Soul");
	v.push_back("Reality");
	v.push_back("Mind");
	for (int i = 0; i < n; ++i)
	{
		string str;
		cin>>str;
		if(str=="purple")
			v[0]="0";
		if(str=="green")
			v[1]="0";
		if(str=="blue")
			v[2]="0";
		if(str=="orange")
			v[3]="0";
		if(str=="red")
			v[4]="0";
		if(str=="yellow")
			v[5]="0";
	}
	cout<<6-n<<endl;
	for (int i = 0; i < 6; ++i)
	{
		if(v[i]!="0")
			cout<<v[i]<<endl;
	}
}