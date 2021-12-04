// https://codeforces.com/problemset/problem/1472/A
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
		int w,h,n,sheet=0;
		cin>>w>>h>>n;
		if(w%2 && h%2 && n<=1)
			cout<<"YES"<<endl;
		else
		{
		while(w%2==0 || h%2==0)
		{
			if(w%2==0)
			{
				sheet += 2;
				w = w/2;
			}
			// cout<<"Sheet "<<sheet<<" w "<<w<<endl;
			if(h%2==0)
			{
				sheet += 2;
				h = h/2;
			}
			// cout<<"Sheet "<<sheet<<" h "<<h<<endl;
			if(sheet>=n)
				break;
		}
		if(sheet>=n)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		}
	}
}