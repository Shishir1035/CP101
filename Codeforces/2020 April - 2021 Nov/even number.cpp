#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
int firdig(int n)
{
	int temp;
	while(n)
	{
		temp = n%10;
		n/=10;
	}
	return temp;
}
bool lol(int n)
{
	bool ret = false;
	while(n)
	{
		int temp = n%10;
		n/=10;
		if(temp %2==0)
			return true;
	}
	return ret;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if((n%10)%2==0)
			cout<<0<<endl;
		else if(firdig(n) % 2 == 0)
			cout<<1<<endl;
		else if(lol(n))
			cout<<2<<endl;
		else
			cout<<-1<<endl;
	}
}