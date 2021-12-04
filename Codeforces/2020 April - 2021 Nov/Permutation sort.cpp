#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];

bool isorted(vector<int>&lmao,int n)
{
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		if(lmao[i] != i+1)
		{
			flag = false;
			break;
		}
	}
	// cout<<flag<<endl;
	return flag;
}
bool rev(vector<int>&lol,int n)
{
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		if(lol[i] != n-i)
		{
			flag = false;
			break;
		}
	}
	// cout<<flag<<endl;
	return flag;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];

		//case 1
		if (isorted(v,n))
			cout<<0<<endl;

		//case 2
		else if(v[0] == 1 || v[n-1] == n)
				cout<<1<<endl;
		
		//case 3
		else if(v[0] == n && v[n-1] == 1)
				cout<<3<<endl;

		//case 4
		else
			cout<<2<<endl;
	}
}




