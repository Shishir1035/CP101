#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
pair<int,int>digit(int n)
{
	set<int>myset;
	int temp=0;
	while(n)
	{
		temp++;
		myset.insert(n%10);
		n/=10;
	}
	return {myset.size(),temp};
}
int main()
{
	int l,r,temp,flag=0;
	cin>>l>>r;
	for (int i = l; i <= r; ++i)
	{
		pair<int,int>myp = digit(i);
		if(myp.first == myp.second)
			{
				temp=i,flag=1;
				break;
			}
	}
	if (flag)
		cout<<temp<<endl;
	else
		cout<<-1<<endl;
}