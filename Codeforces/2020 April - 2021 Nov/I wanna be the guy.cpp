#include<bits/stdc++.h>
using namespace std;
set<int>lmao;
void initial(int x)
{
	int a;
	while(x--)
	{
		cin>>a;
		lmao.insert(a);
	}
}
int main()
{
	int n,p,q;
	cin>>n>>p;
	initial(p);
	cin>>q;
	initial(q);
	(lmao.size() == n)? cout<<"I become the guy."<<endl : cout<<"Oh, my keyboard!"<<endl;
}