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
		int a,b,temp;
		cin>>a>>b;
		temp = 7 - max(a,b);
		if(temp == 2)
			cout<<"1/3\n";
		else if(temp == 3)
			cout<<"1/2\n";
		else if(temp == 4)
			cout<<"2/3\n";
		else if(temp == 6)
			cout<<"1/1\n";
		else
			cout<<temp<<"/6\n";
}