#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define sz 100100
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int   x,y,a,b,arr[sz],arra[sz];
		cin>>x>>y>>a>>b;
		int   j=0;
		for (int i = x; i <= y; i+=a)
			arr[j++]=i;
		int   maxx=j,temp,flag=0;
		j=0;
		for (int i = y; i >= x; --i)
			arra[j++]=i;
		// for (int i = 0; i < min(maxx,j); ++i)
		// {
		// 	if (arr[i]==arra[i])
		// 	{
		// 		flag=1;
		// 		temp=i;
		// 		break;
		// 	}
		// }
		if (flag)
			cout<<temp<<endl;
		else
			cout<<-1<<endl;
	}
}