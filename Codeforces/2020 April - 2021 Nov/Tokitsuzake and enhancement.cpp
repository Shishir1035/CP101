#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	int rem=t%4;
	if(rem==1)
		cout<<"0 A"<<endl;
	if(rem==2)
		cout<<"1 B"<<endl;
	if(rem==3)
		cout<<"2 A"<<endl;
	if(rem==0)
		cout<<"1 A"<<endl;
}
