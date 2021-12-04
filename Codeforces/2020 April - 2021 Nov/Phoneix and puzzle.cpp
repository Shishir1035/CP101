#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
bool issquare(int n)
{
	bool flag = false;
	for (int i = 1; i*i <= n; ++i)
	{
		if(i*i == n)
		{		
			flag = true;
			break;
		}
	}
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
		// if(n%2)
		// 	cout<<"NO"<<endl;

		if(n%4==0)
		{
			if(issquare(n/4))
				{
					cout<<"YES"<<endl;
					goto lol;
				}
			else
				goto lmao;
		}

		lmao:
		if(n%2==0) 
		{
			if(issquare(n/2))
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
			cout<<"NO"<<endl;
		lol:
		continue;
	}
}