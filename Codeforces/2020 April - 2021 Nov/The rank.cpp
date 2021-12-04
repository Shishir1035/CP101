#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t,john,arr[1010];
	cin>>t;

	for (int i = 0; i < t; ++i)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		arr[i]=a+b+c+d;
		if(i==0)
			john=a+b+c+d;
	}
	sort(arr,arr+t);
	reverse(arr,arr+t);
	for (int i = 0; i < t; ++i)
		if(arr[i]==john)
		{
			cout<<i+1<<endl;
			break;
		}

}