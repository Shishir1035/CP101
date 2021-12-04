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
		string str;
		cin>>str;
		sort(str.begin(),str.end());
		// cout<<str<<endl;
		int flag=1;
		for(int i=0; i<str.size()-1; i++)
		{
			char x = str[i]+1;
			// cout<<x<<" "<<str[i+1]<<endl;
			if(str[i]+1 != str[i+1])
			{
				flag=0;
				break;
			}
		}
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;

	}
}