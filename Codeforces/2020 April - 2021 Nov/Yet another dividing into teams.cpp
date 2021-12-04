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
		int n,cnt=0;
		cin>>n;
		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			arr[i]=a;
		}
		sort(arr.begin(),arr.end());
		while(arr.empty() != 1)
			for (int i = 0; i < n-1; ++i)
				if(arr[i+1]-arr[i>1])
					arr.erase(arr.begin()+i, arr.begin()+i+2);
		cout<<cnt+1<<endl;
	}
}