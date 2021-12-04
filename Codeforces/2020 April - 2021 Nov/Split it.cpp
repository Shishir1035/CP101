// https://codeforces.com/problemset/problem/1496/A
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
		int n,k,flag = true;
		string str,temp;
		cin>>n>>k>>str;
		// if(n%2==0 && k!=0)
		// 	cout<<"NO"<<endl;
		if(k==0)
		{
			cout<<"YES"<<endl;
			continue;
		}
		temp = str;
		reverse(temp.begin(), temp.end());
		for (int i = 0; i < k; ++i)
		{
			if(str[i] != temp[i])
			{
				flag = false;
				break;
			}
		}
		if(flag && n>2*k)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}