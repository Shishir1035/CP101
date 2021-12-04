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
		int n;
		cin>>n;
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			v[i]=a;
		}
		sort(v.begin() , v.end());
		reverse(v.begin() , v.end());
		int temp;
		for (int i = 0; i < n; ++i)
		{
			if(i+1 <= v[i])
			{
				temp=i+1;
				continue;
			}
			else
			{
				temp=i;
				break;
			}
		}
		cout<<temp<<endl;
	}
}