#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define sz 1000000
int arr[sz];
void sieve(int n)
{
	//true --> composite number
	for (int i = 2; i*i <= n ; ++i)
		if(arr[i]==0){
			arr[i]=i;
			for (int j = i*i; j <= n; j+=i)
				arr[j]=i;
		}
}
void query(int n)
{
	while(n>1)
	{
		cout<<arr[n]<<" ";
		n=n/arr[n];
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	sieve(sz);
	int t;
	cin>>t;
	while(t--)
	{
		int n;cin>>n;query(n);
	}
}
