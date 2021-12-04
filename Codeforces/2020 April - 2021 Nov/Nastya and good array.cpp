#include<bits/stdc++.h>
#include<algorithm>
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
	fastIO
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin>>v[i];
		for (int i = n-1; i > 0; --i)
		{
			if( __gcd(v[i],v[i-1]) == 1)
				continue;
			else
			{
				if(min(v[i],v[i-1])==v[i])
					v[i-1]=v[i]+1;
				else
					v[i]=v[i-1]+1;
				cout<<i<<" "<<i-1<<" "<<v[i]<<" "<<v[i-1]<<endl;
			}
		}
		printarr(v,n);
	}
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,i,j,ara[20000],x,y;

//     cin>>n;

//     for(i=0;i<n;i++)
//     {
//         cin>>ara[i];
//     }
//     for(i=n-1;i>0;i--)
//     {
//         if(__gcd(ara[i],ara[i-1])==1)
//         	continue;

//         else
//         {

//             if(ara[i]>ara[i-1])
//             	ara[i]-=1;
//             else 
//             	ara[i-1]-=1;
            // cout<<i<<" "<<i-1<<" "<<ara[i]<<" "<<ara[i-1]<<endl;
//         }
//     }
//     // for(i=0;i<n;i++)
//     // {
//     //     cout<<ara[i]<<" ";
//     // }
// }