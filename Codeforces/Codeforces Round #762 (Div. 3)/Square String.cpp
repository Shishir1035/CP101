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
		bool flag = true;
		string str;
		cin>>str;
		if(str.size()%2)
			cout<<"NO\n";
		else
		{
			int st = 0, mid = str.size()/2, en = mid;
			for (int i = 0; i < mid; ++i)
			{
				if(str[st+i] != str[en+i])
				{
					flag = false;
					break;
				}
			}
			if(flag)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}	
		
	}
}