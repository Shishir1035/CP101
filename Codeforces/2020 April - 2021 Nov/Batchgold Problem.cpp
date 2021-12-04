// https://codeforces.com/problemset/problem/749/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int main()
{
	int n;
	cin>>n;
	cout<< n/2 <<endl;
	if(n==3)
		cout<<3<<endl;
	else if(n % 2 == 0)
	{	
		cout<<2;
		for (int i = 4; i <= n; i+=2)
			cout<<" "<<2<<endl;
	}
	else if(n % 2 == 1)
	{	
		cout<<2;
		for (int i = 4; i <= n-2; i+=2)
			cout<<" "<<2;
		cout<<" "<<3<<endl;
	}
}