// https://codeforces.com/problemset/problem/492/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int t;
	cin>>t;
	int cnt=0, i=1, j=2;
	while(t>=0)
	{
		t=t-i;
		i=i + j++;
		if(t >= 0)
			cnt++;
		else 
			break;
	}
	cout<<cnt<<endl;
}