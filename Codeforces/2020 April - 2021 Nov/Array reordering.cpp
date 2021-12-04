#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define pb push_back;
#define printvec(vec,n); for (int i = 0; i < n; ++i) cout<<vec[i]<<" \n"[i==n-1];
#define printarr(arr,n); for (int i = 0; i < n; ++i) cout<<arr[i]<<" \n"[i==n-1];
#define printarr2d(arr,a,b); for (int i = 0; i < a; ++i) for (int j = 0; j < b; ++j) cout<<arr[i][j]<<" \n"[j==b-1];
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
int solve()
{
    int n;
    cin>>n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i)
       cin>>v[i];

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    int ans=0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i+1; j < n; ++j)
            if(max(__gcd(v[j], 2*v[i]),__gcd(v[i],2*v[j])) > 1)
                ans++;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    for (int cnt = 0; cnt < t; ++cnt)
        cout<<solve()<<endl;
}