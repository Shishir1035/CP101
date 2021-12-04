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
	string str;
	cin>>str;
	for (int i = 0; i < str.size(); ++i)
	{
		if(str[i]=='.')
			cout<<0;
		else if(str[i]=='-')
		{
			i++;
			if(str[i]=='-')
				cout<<2;
			else
				cout<<1;
		}
	}
}