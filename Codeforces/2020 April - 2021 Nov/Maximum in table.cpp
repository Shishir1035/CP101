// https://codeforces.com/problemset/problem/509/A
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
	int arr[12][12];
	int n;
	cin>>n;
	for (int i = 0; i < n; i++)
	for(int j = 0; j < n; j++)
	{

		if(i==0 || j==0)
			arr[i][j]=1;
		else
			arr[i][j]=arr[i-1][j] + arr[i][j-1];
	}
	cout<<arr[n-1][n-1]<<endl;
	return 0;
}