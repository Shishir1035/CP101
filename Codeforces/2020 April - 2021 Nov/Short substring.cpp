// https://codeforces.com/problemset/problem/1367/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int j = 1;
		string s,ans;
		cin >> s;
		cout<<s.size()<<endl;
		if(s.size() == 2)
			{
				cout<<s<<endl;
				continue;
			}
		else
		{
			ans[0] = s[0];
			for (i = 1; i < s.size() - 1; ++i)
				if(i % 2 == 0)
					ans[j++] = s[i];

			ans[j] = s[s.size()-1];
		}
		for (int i = 0; i < ans.size(); ++i)
		{
			cout<<ans[i]<<endl;
		}
	}
}
