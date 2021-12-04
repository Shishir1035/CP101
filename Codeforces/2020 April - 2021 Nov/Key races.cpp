#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	string str;
	cin>>str;
	if(s*v1+2*t1<s*v2+2*t2)
		cout<<"First"<<endl;
	else if(s*v1+2*t1>s*v2+2*t2)
		cout<<"Second"<<endl;
	else if(s*v1+2*t1==s*v2+2*t2)
		cout<<"Friendship"<<endl;
}