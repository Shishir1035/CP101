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
		int n;
		cin>>n;
		string str;
		cin>>str;
		int maxx=0, p=0;
		for (int i = n-1; i >= 0; --i)
		{
			if (str[i]=='P')
				p++;

			if (str[i]=='A')
				maxx=max(p,maxx), p=0;
		}
		cout<<maxx<<endl;
	}
}