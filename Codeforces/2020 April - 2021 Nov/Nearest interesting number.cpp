#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int sum(int a)
{
	int summ=0;
	while(a)
		summ+=a%10, a/=10;
	return summ;
}
int main()
{
	int t;
	cin>>t;
	int summ=sum(t);
	while(summ%4)
		summ=sum(++t);
	cout<<t<<endl;
}