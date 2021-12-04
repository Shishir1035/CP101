#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
void solve()
{
	ll n;
    cin>>n;
    std::vector<int> v(2*n);
    for(int i=0;i<2*n;i++)
    	cin>>v[i];
 
    sort(v.begin(), v.end());
 
    for(int i=2*n-1;i>0;i-=2)
        v[i]^=v[i-1]^=v[i]^=v[i-1];

    swap(v[2*n - 1],v[0]);
    for(int i=0;i<2*n;i++)
    	cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    int count;
    cin>>count;
    for (int i = 0; i < count; ++i)
	    solve();
}