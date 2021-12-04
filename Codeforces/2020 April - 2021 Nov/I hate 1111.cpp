#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
void print(string str)
{
	cout<<str<<endl;  
}
void solve()
{
	ll n;
    cin>>n;
   	while(n%11!=0 & n>10)
    	n=n-111;
   	if(n>=0 & n%11==0)
    		print("YES");
   	else
    		print("NO");
}

int main()
{
    fastIO;
    int cnt;
    cin>>cnt;
    for (int i = 0; i < cnt; ++i)
    	solve();
}