#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t,arr[1010];
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int a;
		cin>>a;
		if(a%2==0)
			arr[i]=a-1;
		else
			arr[i]=a;
	}
	for (int i = 0; i < t; ++i)
		cout<<arr[i]<<" \n"[i==t-1];
}