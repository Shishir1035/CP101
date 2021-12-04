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
	char c = 'a';
	string str;
	cin>>str;
	int temp  = diff(str[0],c);
	int ans = min(26 - temp, temp);
    // cout<<ans<<endl;
	 for (int i = 1; i < str.size(); ++i)
		{
			temp = diff(str[i],str[i-1]);
			ans += min(temp , 26 - temp);
		}
	 cout<<ans<<endl;
}