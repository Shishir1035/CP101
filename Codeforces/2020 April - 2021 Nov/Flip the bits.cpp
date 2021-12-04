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
		int n, vione=0, vizero=0, vtone=0, vtzero=0;
		string vi,vt;
		cin>>n;
		cin>>vi>>vt;
		for (int i = 0; i < n; ++i)
		{
			if(vi[i]=='1')
				vione++;
			else
				vizero++;				
		}
		for (int i = 0; i < n; ++i)
		{
			if(vt[i]=='1')
				vtone++;
			else
				vtzero++;
		}
		// cout<<vione<<" "<<vizero<<" "<<vtone<<" "<<vtzero<<endl;
		if(vtone==vione && vtzero==vizero)
		{
			if(vtone%2==0 || vtzero%2==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
}