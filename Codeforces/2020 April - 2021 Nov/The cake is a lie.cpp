#include<iostream>
using namespace std;
void solve()
{
	int a,b,c;
	cin>>a>>b>>c;
	(min((b-1)+(a-1)*b,(a-1)+(b-1)*a) == c) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main()
{
	int count;
	cin>>count;
	for (int i = 0; i < count; ++i)
		solve();
}