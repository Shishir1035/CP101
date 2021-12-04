#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pp pop_back
#define pi acos(-1)
#define endl '\n'
#define print(x) printf("%d\n",x)
int main()
{
	int t,arr[30][2],count = 0;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int a,b;
		cin>>a>>b;
		arr[i][0] = a;
		arr[i][1] = b;
	}
	for (int i = 0; i < t; ++i)
	{
		for (int j = 0; j < t; ++j)
		{
			if (i == j)
				continue;

			if(arr[i][1] == arr[j][0])
				count++;
		}
	}
	cout<<count<<endl;	
}