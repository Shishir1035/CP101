#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define print(x) cout<<x<<endl;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string x1,x2;
		int p1,p2;
		cin>>x1>>p1>>x2>>p2;
		int dig1 = x1.size() + p1;
		int dig2 = x2.size() + p2;
		if(dig1 > dig2)
			cout<<">"<<endl;
		else if(dig1 < dig2)
			cout<<"<"<<endl;
		else
		{
			int temp = min(p1,p2);
			x1.insert(x1.size(),p1 - temp,'0');
			x2.insert(x2.size(),p2 - temp,'0');
			if(x1==x2)
				cout<<"="<<endl;
			if(x1>x2)
				cout<<">"<<endl;
			if(x1<x2)
				cout<<"<"<<endl;
		}

	}
}