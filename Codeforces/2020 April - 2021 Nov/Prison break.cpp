// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		ll a,b;
// 		cin>>a>>b;
// 		cout<<a*b<<endl;
// 	}
// }

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
	int row;
	cin>>row;
	int n=0;
	for (int i = 1; i <= row; ++i)
	{
		for (int j = 1; j <= i; ++j)
			cout<<++n;
		for (int j = 0; j < 2*(row-i); ++j)
			cout<<" ";
		for (int j = 1; j <= i; ++j)
			cout<<n--;
		cout<<endl;
	}
}