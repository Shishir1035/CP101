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
		cin>>n;
		vector<int>v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];
		int k=1;
		int temp=n;
		while(temp--)
		for (int i = 0; i < n; ++i)
		{
			if(v[i]==k)
			{
				cout<<i+1<<" ";
				k++;
			}
		}
}