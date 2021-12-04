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
		int n,a,b;
		string str;
		cin>>n>>a>>b>>str;
		int uniqstrsize = unique(str.begin(), str.end()) - str.begin();
		cout<< n*a + max (n*b , (uniqstrsize/2 + 1)*b )<<endl;
	}
}