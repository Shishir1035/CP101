#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin>>a;
		v[i]=a;
	}
	std::vector<int> ans;
	int cnt=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(v[j]>v[i])
				cnt++;
		}
		ans.push_back(cnt+1);
		cnt=0;
	}
	int G=ans.size();
	for (int i = 0; i < G; ++i)
		cout<<ans[i]<<" \n"[i==G-1];
}