// https://codeforces.com/problemset/problem/1136/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t,arr[20000][2];
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int a,b;
		cin>>a>>b;
		arr[i][0]=a;
		arr[i][1]=b;
	}
	int x,chap;
	cin>>x;
	for (int i = 0; i < t; ++i)
	{
		if(x>= arr[i][0] && x<= arr[i][1])
			{
				chap=i;
				break;
			}
	}
	cout<<t-chap<<endl;
}