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
	bool flag = false;
	int n;
	cin>>n;
	std::vector<string> vs(n);
	for (int i = 0; i < n; ++i)
		cin>>vs[i];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < vs[i].size(); j+=3)
		{
			if(vs[i][j] == 'O' && vs[i][j+1] == 'O')
			{
				vs[i][j] = '+', vs[i][j+1] = '+';
				flag = true;
				break;
			}	
		}
		if(flag)
				break;
	}
	if(flag)
	{
		cout<<"YES\n";
		for (int i = 0; i < n; ++i)
 		cout<<vs[i]<<endl;
 	}
	else
		cout<<"NO\n";
	
}