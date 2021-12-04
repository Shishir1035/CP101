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
		vector<int>arr(n);
		for (int i = 0; i < n; ++i)
		{
			int a;
			cin>>a;
			arr[i]=a;
		}
		sort(arr.begin(),arr.end());
		int temp, minn=arr[0];
		while(arr[0]==minn && arr.empty() != 1)
			{
				arr.erase(arr.begin());
				// for (int i = 0; i < arr.size(); ++i)
				// 	cout<<arr[i]<<" \n"[i==arr.size()-1];
			}
			// if (arr[0]==minn)
			// 	cout<<arr.size()-1<<endl;
			// else
				cout<<arr.size()<<endl;
	}
}