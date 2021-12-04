#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
int diff(char c,char x)
{
	if(c>=x) return c-x;
	else return x-c;
}
int main()
{
	int n;
	string in,out;
	cin>>n>>in>>out;
	int temp , ans=0;
	for (int i = 0; i < n; ++i)
		{
			temp = diff(in[i],out[i]);
			ans += min(temp , 10 - temp);
		}
	cout<<ans<<endl;
}