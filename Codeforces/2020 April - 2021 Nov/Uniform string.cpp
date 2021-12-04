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
		int n,k;
		cin>>n>>k;
		string str;
		char ch='a';
		for (int i = 0; i < k; ++i)
			str+=ch++;
		
		int temp=n/k;
		string ans;
		for (int i = 0; i < temp+1; ++i)
			ans+=str;
		for (int i = 0; i < n; ++i)
			cout<<ans[i];
		cout<<endl;
	}
}