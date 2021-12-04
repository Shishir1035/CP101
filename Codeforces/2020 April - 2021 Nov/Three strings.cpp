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
		string a,b,c;
		cin>>a>>b>>c;
		int flag=1;
		for (int i = 0; i < c.size(); ++i)
		{
			if (c[i] == a[i] && c[i] != b[i])
				swap(c[i] , b[i]);

			else if (c[i] == b[i] && c[i] != a[i])
				swap(c[i] , a[i]); 

			else if (c[i] != a[i] && c[i] != b[i])
				{
					flag = 0; 
					break;
				}
		}
		if (flag && a==b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
			
	}
}