// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		long long int N,M,X,column,row;
// 		cin>>N>>M>>X;
// 		column= ceil((double)X/N);
// 		row= X%N;
// 		if(!row) row=N;
// 		cout<< (row-1)*M + column <<'\n';
// 	}
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m,x;
		cin>>n>>m>>x;
		ll col= ceil((double)x/n);
		ll row= x%n;
		if(row==0)
			row=n;
		cout<< (row-1)*m + col<<endl;
		// else
		// 	cout<<m*m<<endl;
	}
}