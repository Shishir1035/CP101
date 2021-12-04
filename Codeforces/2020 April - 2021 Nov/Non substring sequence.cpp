#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		string str;
		cin>>str;
		while(q--)
		{
		int l,r,lol=0;
		cin>>l>>r;
		for (int i = 0; i < l-1; ++i)
		{
			if (str[i] == str[l-1])
			{
				lol=1;
				break;
			}
		}
		for (int j = r; j < n; ++j)
		{
			if (str[j]==str[r-1])
				lol=1;
		}
		if(lol)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		}
	}
} 