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
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		vector<int> v;
		int maxx = n, cnt = n/2 - 1;
		if(a>n/2+1 || b<n/2){cout<<-1<<'\n';continue;}
        if(a>n/2 && b>n/2){cout<<-1<<'\n'; continue;}
        if(a<=n/2 && b<=n/2){cout<<-1<<'\n'; continue;}
		else
		{
			v.push_back(a);
			while(cnt)
			{
				if(maxx != b)
				{
					v.push_back(maxx);
					maxx--,cnt--;
				}
				else
					maxx--;
			}
			v.push_back(b);
			while(maxx)
			{
				if(maxx==a || maxx==b)
				{
					maxx--;
					continue;
				}
				v.push_back(maxx);
				maxx--;
			}
			printvec(v,n);
		}

	}
}


// 10 1 6 
// 1 10 9 8 7 6 5 4 3 2 
// 10 6 7
// 6 10 9 8 7
// 10 6 1
// 6 7 8 9 10 1 2 3 4 5