#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
	int n;
	string str;
	cin>>n>>str;
	int len = 0;
	for (int i = 0; i < n-2; ++i)
	{
		if(str[i]=='x' && str[i+1] == 'x')
		{
		 	while(str[i+2] == 'x')
			i++,len++;
		}
	}
	cout<<len<<endl;
}